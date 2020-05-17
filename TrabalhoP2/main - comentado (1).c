#include <stdio.h>
#include <stdlib.h>
#include <string.h> /**Biblioteca para manipulação de string, strcmp, strcpy*/
#include <time.h> /**Biblioteca para inicializar o rand()*/

#define MAX_CLIENTES    10 /**enumeração de dados sequenciados*/
#define MAX_COMPRAS     10
typedef enum //estrutura de enumeração
{
    FORMATACAO=0, BACKUP, TROCA_DE_PECAS /**dados serao enumerados*/
} tipo_servico;

typedef struct
{
    int numero; /**Variavel que aleatoriamente identificara um id para compra*/
    tipo_servico servico;

    int tipo_pagamento; /** a vista ou a prazo*/
    int vezes;/** se entrar em 1 irá pedir em quantas vezes*/
    float valor;
    char data[10];

} compra;

typedef struct
{
    char nome[80];
    char endereco[80];
    char telefone[11];
    int ID;

    compra compras; //Referencia de compra
    int qtdCompras;
} cliente;

typedef struct
{
    char nome[25];
    float preco;
} servico;

/**Atribuição estatica paa serviço = variavel serviço*/
servico servicos[3] = {{"FORMATACAO", 50},{"BACKUP", 30},{"TROCA DE PECAS", 40}};

FILE *cadastroCliente;
FILE *cadastroCompra;
char *nomeCliente = "Cliente.txt";
char *nomeCompra = "Compra.txt";

cliente cadCliente; /**aloca estaticamente o dado do cliente temporario na memoria e depois no arquivo*/
compra cadCompra;
// Declarar variavel
int opcao;
int opcaoCliente;
int opcaoServico;
int opcaoCompra;
char op;

// Menus
int Principal_Menu();
int Cliente_Menu();
int Servico_Menu();
int Compra_Menu();

// Cliente
int Cliente_ChecarExistencia(int id);
void Cliente_Cadastro();
void Cliente_Exibir(cliente c);
void Cliente_Listar();
void Cliente_Alterar();

int Cliente_PegarLinhaCliente(cliente* c);
cliente* Cliente_Pesquisar_Nome(char nome[80]);
cliente* Cliente_Pesquisar_ID(int id);

// Compra
int Compra_ChecarExistencia(int numero);
void Compra_Cadastro();
void Compra_Exibir(compra p);
void Compra_Listar();
void GerarNotaFiscal();
void GerarBoleto();

// Serviços
void Servico_Listar();

int main()
{
    int opgeral=0;

    srand(time(NULL));/** se */

    do
    {
        opgeral = menuPrincipal();
    }
    while(opgeral > 0);
}

int menuPrincipal()
{
    cliente* clienteBusca;

    char nomeBusca[80];
    int opcao, opcao_cliente=0, opcao_servico=0, opcao_compra=0, opcao_busca=0, idBusca;
    system("cls");

    printf("Contas a receber:\n");
    printf("1 - Cliente\n");
    printf("2 - Servico\n");
    printf("3 - Compra\n");
    printf("0 - Sair do programa\n");
    printf("\nOpcao desejada: ");
    scanf("%d",&opcao);

    switch(opcao)
    {
    case 1:
        do
        {
            opcao_cliente = Cliente_Menu();

            switch(opcao_cliente)
            {
            case 1:
                Cliente_Cadastro();
                system("pause");
                break;
            case 2:
                Cliente_Alterar();
                system("pause");
                break;
            case 3:
                Cliente_Listar();
                system("pause");
                break;
            case 4:
                system("cls");
                printf("1 - Por nome\n2 - Por ID\n");
                printf("Digite a opcao: ");
                scanf("%d", &opcao_busca);

                if(opcao_busca == 1)
                {
                    fflush(stdin);
                    printf("\nDigite o nome: ");
                    gets(nomeBusca);

                    clienteBusca = Cliente_Pesquisar_Nome(nomeBusca);
                }
                else if(opcao_busca == 2)
                {
                    printf("\nDigite o ID: ");
                    scanf("%d", &idBusca);

                    clienteBusca = Cliente_Pesquisar_ID(idBusca);
                }
                else
                {
                    break;
                }

                if(clienteBusca)
                {
                    Cliente_Exibir(*clienteBusca);
                }
                else
                {
                    printf("\nCliente nao encontrado!!\n");
                }

                system("pause");
                break;
            }
        }
        while(opcao_cliente > 0);
        break;
    case 2:
        do
        {
            opcao_servico = Servico_Menu();

            switch(opcao_servico)
            {
            case 1:
                Servico_Listar();
                system("pause");
                break;
            }
        }
        while(opcao_servico > 0);
        break;
    case 3:
        do
        {
            opcao_compra = Compra_Menu();

            switch(opcao_compra)
            {
            case 1:
                Compra_Cadastro();
                system("pause");
                break;
            case 2:
                GerarNotaFiscal();
                system("pause");
                break;
            case 3:
                GerarBoleto();
                system("pause");
                break;
            }
        }
        while(opcao_compra > 0);
    }
    return opcao;
}

// Cliente
int Cliente_Menu()
{
    int opcaoCliente;
    system("cls");

    printf("Contas a receber:\n");
    printf("1 - Cadastro\n");
    printf("2 - Alterar\n");
    printf("3 - Listar\n");
    printf("4 - Pesquisar\n");
    printf("0 - Voltar\n");
    printf("\nInforme a Opcao desejada: ");
    scanf("%d",&opcaoCliente);

    return opcaoCliente;

}
void Cliente_Cadastro()
{
    cliente ctemp;

    system("cls");
    printf("\---------------------------------------\n");
    printf("\nInforme Dados do Cliente:\n");
    printf("\---------------------------------------\n");

    fflush(stdin);
    printf("\nNome: ");
    gets(ctemp.nome);

    fflush(stdin);
    printf("\nEndereco: ");
    gets(ctemp.endereco);

    fflush(stdin);
    printf("\nTelefone: ");
    gets(ctemp.telefone);

    do
    {
        printf("\nID: ");
        scanf("%d",&ctemp.ID);
    }
    while(Cliente_ChecarExistencia(ctemp.ID));

    //ctemp.compras = NULL;
    ctemp.qtdCompras=0;

    if ((cadastroCliente = fopen(nomeCliente,"ab")) == NULL)

        printf("Problemas na abertura do arquivo\n");
        return;
    }
    else
    {
        fwrite(&ctemp, sizeof(cliente), 1, cadastroCliente);
        fclose(cadastroCliente);
    }
}

cliente* Cliente_Pesquisar_Nome(char nome[80])
{
    cliente* temp = (cliente*)malloc(sizeof(cliente));


    if ((cadastroCliente = fopen(nomeCliente,"r+b")) == NULL)
    {
        printf("Problemas na abertura do arquivo\n");
        return NULL;
    }
    else
    {
        fread(temp, sizeof(cliente), 1, cadastroCliente);

        while(!feof(cadastroCliente))
        {
            if(!strcmp(temp->nome, nome))
            {
                fseek(cadastroCliente, -sizeof(cliente),SEEK_CUR);

                return temp; ;
            }
            fread(temp, sizeof(cliente), 1, cadastroCliente);
        }
    }

    fclose(cadastroCliente);

    return NULL;
}

cliente* Cliente_Pesquisar_ID(int id)
{
    cliente* temp = (cliente*)malloc(sizeof(cliente));

    if ((cadastroCliente = fopen(nomeCliente,"r+b")) == NULL)
    {
        printf("Problemas na abertura do arquivo\n");
        return NULL;
    }
    else
    {
        fread(temp, sizeof(cliente), 1, cadastroCliente);

        while(!feof(cadastroCliente))
        {
            if(temp->ID == id)
            {
                fseek(cadastroCliente, -sizeof(cliente),SEEK_CUR);
                return temp;
            }
            fread(temp, sizeof(cliente), 1, cadastroCliente);
        }
    }

    fclose(cadastroCliente);

    return NULL;
}

void Cliente_Exibir(cliente c)
{
    printf("\nID: %d", c.ID);
    printf("\nNome: %s", c.nome);
    printf("\nEndereco: %s", c.endereco);
    printf("\nTelefone: %s", c.telefone);

    printf("\n\nCOMPRA PENDENTE >>>\n");

    if(c.qtdCompras)
    {
        Compra_Exibir(c.compras);
    }
    else
    {
        printf("\nNao ha compras!\n");
    }


}

void Cliente_Alterar()
{
    char novoTelefone[80], novoEndereco[80], tempStr[80];
    cliente* clienteBusca;
    cliente temp;
    int idAlvo, linha=0, linhaParaDeletar;

    strcpy(novoEndereco, " ");
    strcpy(novoTelefone, " ");
    strcpy(tempStr, " ");

    system("cls");
    printf("\---------------------------------------\n");
    printf("\nCLIENTE - ALTERAR:\n");
    printf("\---------------------------------------\n");

    Cliente_Listar();

    printf("\nDigite o ID do cliente que deseja alterar: ");
    scanf("%d", &idAlvo);

    clienteBusca = Cliente_Pesquisar_ID(idAlvo);

    if(clienteBusca)
    {

        if ((cadastroCliente = fopen(nomeCliente,"r+b")) == NULL)
        {
            printf("Problemas na abertura do arquivo\n");
            return NULL;
        }
        else
        {

            printf("\nDigite o novo endereco (digite 'pular' para seguir): ");
            fflush(stdin);
            gets(tempStr);

            if(strcmp(tempStr, "pular"))
            {
                strcpy(novoEndereco, tempStr);
            }

            printf("\nDigite o novo telefone (digite 'pular' para seguir): ");
            fflush(stdin);
            gets(tempStr);

            if(strcmp(tempStr, "pular"))
            {
                strcpy(novoTelefone, tempStr);
            }

            while(fread(&temp, sizeof(cliente), 1, cadastroCliente))
            {
                if(temp.ID == clienteBusca->ID)
                {
                    Cliente_Exibir(temp);

                    printf("\n\n");

                    if(strcmp(novoEndereco, " "))
                    {
                        strcpy(temp.endereco, novoEndereco);
                    }

                    if(strcmp(novoTelefone, " "))
                    {
                        strcpy(temp.telefone, novoTelefone);
                    }

                    Cliente_Exibir(temp);

                    printf("\n\n");

                    fseek(cadastroCliente, -sizeof(cliente), SEEK_CUR);

                    fwrite(&temp, sizeof(cliente), 1, cadastroCliente);
                    fclose(cadastroCliente);
                    break;
                }
            }
        }
    }
    else
    {
        printf("\nCliente nao cadastrado!");
    }

    system("pause");
}

void Cliente_Listar()
{
    int indexProx = 1;
    cliente temp;

    if ((cadastroCliente = fopen(nomeCliente,"r+b")) == NULL)
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    else
    {
        fseek(cadastroCliente, -sizeof(cliente), SEEK_SET);
        fread(&temp, sizeof(cliente), 1, cadastroCliente);
        while(!feof(cadastroCliente))
        {
            Cliente_Exibir(temp);

            printf("\n--------------------------------------\n");
            fread(&temp, sizeof(cliente), 1, cadastroCliente);
        }
    }

    fclose(cadastroCliente);

    system("pause");
}

int Cliente_ChecarExistencia(int id)
{
    cliente temp;

    if ((cadastroCliente = fopen(nomeCliente,"r")) == NULL)
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    else
    {
        fread(&temp, sizeof(cliente), 1, cadastroCliente);

        while(!feof(cadastroCliente))
        {
            if(temp.ID == id)
            {
                printf("\n\nCliente ja cadastrado!!\n\n");
                fseek(cadastroCliente, -sizeof(cliente), SEEK_CUR);
                return 1;
            }
            fread(&temp, sizeof(cliente), 1, cadastroCliente);
        }
    }

    fclose(cadastroCliente);

    return 0;
}

int Servico_Menu()
{
    int opcaoServico;
    system ("cls");

    printf("Contas a receber:\n");
    printf("1 - Listar Servico\n");
    printf("0 - Voltar\n");
    printf("\nInforme a Opcao desejada: ");
    scanf("%d",&opcaoServico);

    return opcaoServico;

}
int Compra_Menu()
{
    int opcaoCompra;
    system("cls");
    printf("Contas a receber:\n");
    printf("1 - Cadastrar\n");
    printf("2 - Gerar Nota Fiscal\n");
    printf("3 - Gerar Boleto\n");
    printf("0 - Sair do programa\n");
    printf("\nInforme a Opcao desejada: ");
    scanf("%d",&opcaoCompra);

    return opcaoCompra;
}

// Compra
void Compra_Cadastro()
{
    cliente tempCliente;
    int tempID, tempServico;
    cliente* clienteAlvo;
    compra ccompra;

    cadastroCompra = fopen(nomeCompra, "rb");

    if (!cadastroCompra)
    {
        cadastroCompra = fopen(nomeCompra, "wb");
        fclose(cadastroCompra);
    }

    system("cls");
    printf("\---------------------------------------\n");
    printf("\nInforme Dados do Compra:\n");
    printf("\---------------------------------------\n");

    Cliente_Listar();
    printf("\nDigite o ID do cliente para efetuar a compra: ");
    scanf("%d", &tempID);

    clienteAlvo = Cliente_Pesquisar_ID(tempID);
    if(clienteAlvo)
    {
        if(clienteAlvo->qtdCompras)
        {
            system("cls");
            printf("\nConta pendente! Voce deve pagar antes!\n");

            Compra_Exibir(clienteAlvo->compras);

            system("pause");

            return;
        }

        if ((cadastroCliente = fopen(nomeCliente,"r+b")) == NULL)
        {
            printf("Problemas na abertura do arquivo\n");
            return;
        }
        else
        {
            fseek(cadastroCliente, -sizeof(cliente), SEEK_SET);

            ccompra.numero = rand() % 1000000;

            printf("\nNumero gerado da compra: %d\n\n", ccompra.numero);

            system("pause");

            if(!Compra_ChecarExistencia(ccompra.numero))
            {

                printf("\n------------------------------------------\n");

                Servico_Listar();

                int i;
                for(i=0;i<10;i++)
                {
                    ccompra.data[i] = '\0';
                }

                printf("\nData (formato: DD/MM/YYYY): ");
                scanf("%s", &ccompra.data);

                printf("\nSelecione o servico: ");
                scanf("%d", &tempServico);

                ccompra.servico = (tipo_servico)tempServico;

                printf("\nSelecione o tipo de pagamento (0 - a vista, 1 - a prazo): ");
                scanf("%d", &ccompra.tipo_pagamento);

                if(ccompra.tipo_pagamento)
                {
                    printf("\nDigite a quantidade de vezes: ");
                    scanf("%d", &ccompra.vezes);
                }
                else
                {
                    ccompra.vezes = 1;

                ccompra.valor = servicos[(int)ccompra.servico].preco / ccompra.vezes;

                printf("\nValor da compra: %d x R$ %.2f\n", ccompra.vezes, ccompra.valor);

                if ((cadastroCompra = fopen(nomeCompra,"a+b")) == NULL)
                {
                    printf("Problemas na abertura do arquivo\n");
                    return;
                }
                else
                {
                    if(!clienteAlvo->qtdCompras)
                    {
                        clienteAlvo->compras = ccompra;
                        clienteAlvo->qtdCompras++;
                        printf("\nCompra adicionada!\n");
                    }

                    while(fread(&tempCliente, sizeof(cliente), 1, cadastroCliente))
                    {
                        if(tempCliente.ID == clienteAlvo->ID)
                        {
                            tempCliente.compras = ccompra;
                            tempCliente.qtdCompras++;

                            fseek(cadastroCliente, -sizeof(cliente), SEEK_CUR);

                            fwrite(&tempCliente, sizeof(cliente), 1, cadastroCliente);
                            fclose(cadastroCliente);
                            break;
                        }
                    }


                    fwrite(&ccompra, sizeof(compra), 1, cadastroCompra);
                    fclose(cadastroCompra);
                    return;
                }
            }
            else
            {
                printf("\nCompra ja cadastrada!\n");
            }
        }
    }
    else
    {
        printf("\nCliente nao encontrado!\n");
    }


    getchar();
}

void Compra_Exibir(compra p)
{
    printf("\nNumero: %d", p.numero);
    printf("\nData: %s", p.data);
    printf("\nServico selecionado: %s", servicos[(int)p.servico].nome);
    printf("\nTipo de pagamento: %s", !p.tipo_pagamento ? "a vista" : "a prazo");
    printf("\nValor: %d x R$ %.2f\n", p.vezes, p.valor);
}

int Compra_ChecarExistencia(int numero)
{
    compra temp;

    if ((cadastroCompra = fopen(nomeCompra,"r")) == NULL)
    {
        printf("Problemas na abertura do arquivo\n");
        return -1;
    }
    else
    {
        fread(&temp, sizeof(compra), 1, cadastroCompra);

        while(!feof(cadastroCompra))
        {
            if(temp.numero == numero)
            {
                printf("\n\nCompra ja cadastrada!!\n\n");
                fseek(cadastroCompra, -sizeof(compra), SEEK_CUR);
                fclose(cadastroCompra);
                return 1;
            }
            fread(&temp, sizeof(compra), 1, cadastroCompra);
        }
    }

    fclose(cadastroCompra);

    return 0;
}

void GerarNotaFiscal()
{
    char nomeDiretorio[40];

    cliente clienteTemp;
    FILE* arqClienteAtual;

    if((cadastroCliente = fopen(nomeCliente, "rb")) == NULL)
    {
        printf("\nErro ao abrir o arquivo!\n");
        return;
    }
    else
    {
        while(fread(&clienteTemp, sizeof(cliente), 1, cadastroCliente))
        {
            if(clienteTemp.qtdCompras > 0)
            {
                strcpy(nomeDiretorio, clienteTemp.nome);
                strcat(nomeDiretorio, "-NotaFiscal.txt");

                if((arqClienteAtual = fopen(nomeDiretorio, "r")) != NULL)
                {
                    printf("\nNota fiscal de '%s' ja foi gerado!\n", clienteTemp.nome);
                    fclose(arqClienteAtual);
                    continue;
                }

                arqClienteAtual = fopen(nomeDiretorio, "w");

                if(arqClienteAtual)
                {
                    fprintf(arqClienteAtual, "CLIENTE >>\n\n");
                    fprintf(arqClienteAtual, "\tID: %d \n", clienteTemp.ID);
                    fprintf(arqClienteAtual, "\tNome: %s \n", clienteTemp.nome);
                    fprintf(arqClienteAtual, "\tEndereco: %s \n", clienteTemp.endereco);
                    fprintf(arqClienteAtual, "\tCompra pendente: %s \n\n", clienteTemp.qtdCompras ? "sim" : "nao");

                    fprintf(arqClienteAtual, "COMPRA >>\n\n");
                    fprintf(arqClienteAtual, "\tNumero: %d \n", clienteTemp.compras.numero);
                    fprintf(arqClienteAtual, "\tData: %s \n", clienteTemp.compras.data);
                    fprintf(arqClienteAtual, "\tServico selecionado: %s \n", servicos[(int)clienteTemp.compras.servico].nome);
                    fprintf(arqClienteAtual, "\tTipo de pagamento: %s \n", !clienteTemp.compras.tipo_pagamento ? "a vista" : "a prazo");
                    fprintf(arqClienteAtual, "\tValor: %d x R$ %.2f\n", clienteTemp.compras.vezes, clienteTemp.compras.valor);

                    fclose(arqClienteAtual);
                }
            }

        }
    }

    fclose(cadastroCliente);
}

void GerarBoleto()
{
    char dataVencimento[10];
    char nomeDiretorio[40];

    cliente clienteTemp;
    FILE* arqClienteAtual;

    if((cadastroCliente = fopen(nomeCliente, "rb")) == NULL)
    {
        printf("\nErro ao abrir o arquivo!\n");
        return;
    }
    else
    {
        while(fread(&clienteTemp, sizeof(cliente), 1, cadastroCliente))
        {
            if(clienteTemp.qtdCompras > 0)
            {

                strcpy(nomeDiretorio, clienteTemp.nome);
                strcat(nomeDiretorio, "-Boleto.txt");

                if((arqClienteAtual = fopen(nomeDiretorio, "r")) != NULL)
                {
                    printf("\nBoleto de '%s' ja foi gerado!\n", clienteTemp.nome);
                    fclose(arqClienteAtual);
                    continue;
                }

                printf("\n-------------------------------\n");
                printf("\nCLIENTE: %s\n", clienteTemp.nome);
                printf("\nEspecifique a data de vencimento: ");
                scanf("%s", &dataVencimento);

                arqClienteAtual = fopen(nomeDiretorio, "w");

                if(arqClienteAtual)
                {
                    fprintf(arqClienteAtual, "CLIENTE >>\n\n");
                    fprintf(arqClienteAtual, "\tID: %d \n", clienteTemp.ID);
                    fprintf(arqClienteAtual, "\tNome: %s \n", clienteTemp.nome);
                    fprintf(arqClienteAtual, "\tEndereco: %s \n", clienteTemp.endereco);
                    fprintf(arqClienteAtual, "\tCompra pendente: %s \n\n", clienteTemp.qtdCompras ? "sim" : "nao");

                    fprintf(arqClienteAtual, "COMPRA >>\n\n");
                    fprintf(arqClienteAtual, "\tNumero: %d \n", clienteTemp.compras.numero);
                    fprintf(arqClienteAtual, "\tData de compra: %s \n", clienteTemp.compras.data);
                    fprintf(arqClienteAtual, "\tData de vencimento: %s \n", dataVencimento);
                    fprintf(arqClienteAtual, "\tServico selecionado: %s \n", servicos[(int)clienteTemp.compras.servico].nome);
                    fprintf(arqClienteAtual, "\tTipo de pagamento: %s \n", !clienteTemp.compras.tipo_pagamento ? "a vista" : "a prazo"); /** operacao ternaria para exibir qual tipo de pagamento */
                    fprintf(arqClienteAtual, "\tValor: %d x R$ %.2f\n", clienteTemp.compras.vezes, clienteTemp.compras.valor);

                    fclose(arqClienteAtual);
                }
            }
        }
    }

    fclose(cadastroCliente);

    system("pause");
}

void Servico_Listar()
{
    int i;

    system("cls");
    printf("\---------------------------------------\n");
    printf("\nServicos disponiveis:\n");
    printf("\---------------------------------------\n");

    printf("\nID:\t\tNome\t\tPreco");

    for(i=0; i<3; i++)
    {
        printf("\n%d:\t\t%s\t\tR$ %.2f", i, servicos[i].nome, servicos[i].preco);
    }

    printf("\n\n");

    system("pause");
}
