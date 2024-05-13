#ifndef PROJETOFAMILIAEXCELSIOR_FUNCOES_H
#define MAX_DIGITOS 11
#define MAX 255
#define TAM_CEP 8
#define TAM_DATA 10

typedef struct Nome{
  wchar_t completo[MAX];
  wchar_t apelido[MAX];
}Nome;

typedef struct Endereco{
  char UF[2];
  wchar_t localidade[MAX];
  wchar_t logradouro[MAX];
  wchar_t bairro[MAX];
  wchar_t complemento;
}Endereco;

typedef struct PessoaFisica{
  char cpf[MAX_DIGITOS];
  Nome nome;
  wchat_t email[MAX];
  char telefone[MAX_DIGITOS];
  char cep[TAM_CEP];
  char dataNascimento[TAM_DATA];
}PessoaFisica;

int somar(int x, int y);
int cadastro();
void printador();

#endif