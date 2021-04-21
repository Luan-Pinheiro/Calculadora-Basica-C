#include<stdio.h>
#include<math.h>

int main(){

char tipoOperacao;
int adicao,a1,a2 , s1, s2, subtracao, divisao, d1 , d2, multiplicacao,m1, m2, raiz,r1, bhaskara;
float ab, bb, cb, delta, xi, xii;

//Pergunta qual operação deseja realizar
printf(" __________        ________                        __________                                        ________        ____________      _________         _______ \n");
printf("|                 |        |      |               |                  |         |      |             |        |             |          |         |       |       | \n");
printf("|                 |        |      |               |                  |         |      |             |        |             |          |         |       |       | \n");
printf("|                 |        |      |               |                  |         |      |             |        |             |          |         |       |       | \n");
printf("|                 |________|      |               |                  |         |      |             |________|             |          |         |       |______ | \n");
printf("|                 |        |      |               |                  |         |      |             |        |             |          |         |       |      )  \n");
printf("|                 |        |      |               |                  |         |      |             |        |             |          |         |       |       )  \n");
printf("|                 |        |      |               |                  |         |      |             |        |             |          |         |       |        ) \n");
printf(" ----------       |        |       ---------       ----------         ---------        ---------    |        |             |           ---------        |         ) \n");
printf("----------------------------------- \n");
printf("Qual operacao voce deseja realizar?  \n\n A-Adicao\n S-Subtracao\n D-Divisao \n M-Multiplicacao \n R-raiz \n B-Bhaskara \n");
printf("----------------------------------- \n");
scanf("%c",&tipoOperacao);

//TREINAR PRA APERFEIÇOAR NO FUTURO//
if(tipoOperacao=='A'||tipoOperacao=='a'){
    /*printf("Quantos termos serao usados na adicao?: ");
    scanf("%d", &quanta);
    for(a = 0; a < quanta; a++){
        printf("Digite o termo da adicao: \n");
        scanf("%d", &s[0]);
    }*/
    printf("----------------------------------- \n");
    printf("Qual o primeiro valor da adicao?: \n");
    scanf("%d",&a1);
    printf("Qual o segundo valor da adicao?: \n");
    scanf("%d",&a2);
    printf("----------------------------------- \n");

    adicao = a1+a2;
    printf("O resultado eh  %d", adicao);
}
if(tipoOperacao=='S'||tipoOperacao=='s'){
    /*printf("Quantos termos serao usados na subtracao?: ");
    scanf("%d", &quants);
    for(s = 0; s < quants; s++){
        printf("Digite o termo da subtracao: \n");
        scanf("%d", &s[0]);
    }*/
    printf("----------------------------------- \n");
    printf("Qual o primeiro valor da subtracao?: \n");
    scanf("%d",&s1);
    printf("Qual o segundo valor da subtracao?: \n");
    scanf("%d",&s2);
    printf("----------------------------------- \n");
    subtracao = s1-s2;
    printf("O resultado eh %d", subtracao);
}

if(tipoOperacao=='D'||tipoOperacao=='d'){
    printf("----------------------------------- \n");
    printf("Insira o dividendo: \n");
    scanf("%d", &d1);
    printf("Insira o divisor: \n");
    scanf("%d", &d2);
    printf("----------------------------------- \n");
    divisao = d1/d2;
    printf("O resultado eh  %d", divisao);
}
if(tipoOperacao=='M'||tipoOperacao=='m'){
    printf("----------------------------------- \n");
    printf("Insira o multiplicando: \n");
    scanf("%d", &m1);
    printf("Insira o multiplicador: \n");
    scanf("%d", &m2);
    printf("----------------------------------- \n");

    multiplicacao = m1*m2;
    printf("O resultado eh  %d", multiplicacao);

}
if(tipoOperacao=='R'||tipoOperacao=='r'){
    printf("----------------------------------- \n");
    printf("Insira o numero o qual deseja obter a raiz quadrada: \n");
    scanf("%d", &r1);
    printf("----------------------------------- \n");
    raiz = sqrt(r1);
    printf("O resultado eh %d", raiz);

}

if(tipoOperacao=='B'||tipoOperacao=='b'){
    printf("----------------------------------- \n");
    printf("Insira o valor de a: \n");
    scanf("%f", &ab);
    printf("----------------------------------- \n");
    printf("Insira o valor de b: \n");
    scanf("%f", &bb);
    printf("----------------------------------- \n");
    printf("Insira o valor de c: \n");
    scanf("%f", &cb);

    delta = bb*bb - (4*ab*cb);
    xi = (-bb + sqrt(delta))/2*ab;
    xii = (-bb - sqrt(delta))/2*ab;
    printf("----------------------------------- \n");

    if(delta<0){
        printf("Nao existem raizes reais para essa equacao");
    }else if(delta >= 0){
        printf("As raises reais sao %f e %f", xi, xii);
    }

}










}
