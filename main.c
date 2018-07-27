#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>



int main()
{

    srand(time(NULL));
    char num[9]={'1','2','3','4','5','6','7','8',' '};
    char num2[3][3];
    char tecla, tecla2, tecla3;
    int verifica[9] = {0,0,0,0,0,0,0,0,0};
    int verifica2[9] = {0,0,0,0,0,0,0,0,0};
    int i,x,k=11;
    int j,y,m=0;
    int cl =0;
    int embaralha = 1;
    int contador = 0;
    int res;


    while(embaralha ==1){
     for (i=0;i<3;i++){

        for (j=0;j<3;j++){


            do {

                x = rand()%9;
            }


            while( verifica[x] !=0);
            num2[i][j] = num[x];
            verifica[x] = 1;
                   }


     }
     embaralha = 2;
     cl=1;
}

     while(cl==1){
            printf("     QUEBRA-CABE%cA DAS PASTILHAS\n\n", 128);
            printf("     MOVIMENTOS: %d\n\n",contador);
            printf("\t%c",218);
            printf("%c",196);
            printf("%c",196);
            printf("%c",196);
            printf("%c",194);
            printf("%c",196);
            printf("%c",196);
            printf("%c",196);
            printf("%c",194);
            printf("%c",196);
            printf("%c",196);
            printf("%c",196);
            printf("%c", 191);
            printf("\n");
    for (i=0; i<2; i++){

        printf("\t");
        for (j=0;j<3; j++){
            printf("%c %c ",179, num2[i][j]);

    }
            printf("%c",179);
            printf("\n");
            printf("\t%c",195);
            printf("%c",196);
            printf("%c",196);
            printf("%c",196);
            printf("%c",197);
            printf("%c",196);
            printf("%c",196);
            printf("%c",196);
            printf("%c",197);
            printf("%c",196);
            printf("%c",196);
            printf("%c",196);
            printf("%c",180);
            printf("\n");



    }
    printf("\t");
    for (j=0;j<3;j++){
        printf("%c %c ",179, num2[2][j]);
    }
            printf("%c",179);
            printf("\n");
            printf("\t%c",192);
            printf("%c",196);
            printf("%c",196);
            printf("%c",196);
            printf("%c",193);
            printf("%c",196);
            printf("%c",196);
            printf("%c",196);
            printf("%c",193);
            printf("%c",196);
            printf("%c",196);
            printf("%c",196);
            printf("%c",217);
            printf("\n\n");
            cl=0;
                        if (num2[0][0] == '1' && num2[0][1] == '2' && num2[0][2] == '3' &&
                num2[1][0] == '4' && num2[1][1] == '5' && num2[1][2] == '6' &&
                num2[2][0] == '7' && num2[2][1] == '8' && num2[2][2] == ' '){
                            res = contador;

                            printf("\t>>VOC%c COMPLETOU O JOGO%c PARAB%cNS\n",210,33,144);
                            printf("\t>>MOVIMENTOS: %d\n", res);
                            printf("\t>>DESEJA JOGAR NOVAMENTE%c\n",63);
                            tecla=getch();
                            if(tecla=='s' || tecla=='S'){
                                    embaralha =1;
                                    verifica[0]=0;
                                    verifica[1]=0;
                                    verifica[2]=0;
                                    verifica[3]=0;
                                    verifica[4]=0;
                                    verifica[5]=0;
                                    verifica[6]=0;
                                    verifica[7]=0;
                                    verifica[8]=0;
                                    verifica[9]=0;
                                    system("cls");

                                    }
                            else {system("PAUSE");
                            tecla=='32';

                            }


         }
         else{
            int op;
            tecla = getch();


            if (num2[0][0]==' '){
                    switch(tecla){
                        case 75:
                        num2[0][0] = num2[0][1];
                        num2[0][1] = ' ';
                        op==3;
                        contador = contador + 1;

                        break;

                        case 72:
                        num2[0][0] = num2[1][0];
                        num2[1][0] = ' ';
                        contador = contador + 1;
                        break;

                    }
                    tecla = '-32';



            }


             if (num2[0][1]==' '){

                    switch(tecla){
                        case 75:

                        num2[0][1] = num2[0][2];
                        num2[0][2] = ' ';
                        contador = contador + 1;


                        break;

                        case 72:
                        num2[0][1] = num2[1][1];
                        num2[1][1] = ' ';
                        contador = contador + 1;
                        break;

                        case 77:
                        num2[0][1] = num2[0][0];
                        num2[0][0] = ' ';
                        contador = contador + 1;
                        break;

                    }

                    tecla = '-32';


            }


              if (num2[0][2]==' '){
                    switch(tecla){


                        case 72:
                        num2[0][2] = num2[1][2];
                        num2[1][2] = ' ';
                        contador = contador + 1;
                        break;

                        case 77:
                        num2[0][2] = num2[0][1];
                        num2[0][1] = ' ';
                        contador = contador + 1;
                        break;

                    }
                    tecla = '-32';


            }

                if (num2[1][0]==' '){
                    switch(tecla){


                        case 75:
                        num2[1][0] = num2[1][1];
                        num2[1][1] = ' ';
                        contador = contador + 1;
                        break;

                        case 72:
                        num2[1][0] = num2[2][0];
                        num2[2][0] = ' ';
                        contador = contador + 1;
                        break;

                        case 80:
                        num2[1][0] = num2[0][0];
                        num2[0][0] = ' ';
                        contador = contador + 1;
                        break;

                    }
                   tecla = '-32';


            }

            if (num2[1][1]==' '){
                    switch(tecla){


                        case 75:// para a esquerda
                        num2[1][1] = num2[1][2];
                        num2[1][2] = ' ';
                        contador = contador + 1;
                        break;

                        case 72://para cima
                        num2[1][1] = num2[2][1];
                        num2[2][1] = ' ';
                        contador = contador + 1;
                        break;

                        case 80://para baixo
                        num2[1][1] = num2[0][1];
                        num2[0][1] = ' ';
                        contador = contador + 1;
                        break;

                        case 77://para direita
                        num2[1][1] = num2[1][0];
                        num2[1][0] = ' ';
                        contador = contador + 1;
                        break;

                    }
                    tecla = '-32';

            }

            if (num2[1][2]==' '){
                    switch(tecla){

                        case 72://para cima
                        num2[1][2] = num2[2][2];
                        num2[2][2] = ' ';
                        contador = contador + 1;
                        break;

                        case 80://para baixo
                        num2[1][2] = num2[0][2];
                        num2[0][2] = ' ';
                        contador = contador + 1;
                        break;

                        case 77://para direita
                        num2[1][2] = num2[1][1];
                        num2[1][1] = ' ';
                        contador = contador + 1;
                        break;

                    }
                    tecla = '-32';

            }
                if (num2[2][0]==' '){
                    switch(tecla){

                        case 75://para ESQUERDA
                        num2[2][0] = num2[2][1];
                        num2[2][1] = ' ';
                        contador = contador + 1;
                        break;

                        case 80://para baixo
                        num2[2][0] = num2[1][0];
                        num2[1][0] = ' ';
                        contador = contador + 1;
                        break;


                    }
                    tecla = '-32';

            }

            if (num2[2][1]==' '){
                    switch(tecla){


                        case 75:// para a esquerda
                        num2[2][1] = num2[2][2];
                        num2[2][2] = ' ';
                        contador = contador + 1;
                        break;

                        case 80://para baixo
                        num2[2][1] = num2[1][1];
                        num2[1][1] = ' ';
                        contador = contador + 1;
                        break;

                        case 77://para direita
                        num2[2][1] = num2[2][0];
                        num2[2][0] = ' ';
                        contador = contador + 1;
                        break;

                    }
                    tecla = '-32';


            }
            if (num2[2][2]==' '){
                    switch(tecla){

                        case 80://para baixo
                        num2[2][2] = num2[1][2];
                        num2[1][2] = ' ';
                        break;

                        case 77://para direita
                        num2[2][2] = num2[2][1];
                        num2[2][1] = ' ';
                        break;

                    }
                    tecla = '-32';


            }





            system("cls");
            cl=1;



     }



     }





    return 0;
}
