#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_uchar_array(unsigned char *buf, int count);

void fill_with_random(unsigned char *buf, int count);

void convierte(unsigned char *cadena, int tam_in, float *datos, int tam_out);

void print_float_array(float *buf, int count);

int main() {
    int tam_array_in = 30;
    int tam_array_out = 16;
    unsigned char array_in[30];
    float array_out[16];

    srand(time(NULL));

    fill_with_random(array_in, tam_array_in);
    print_uchar_array(array_in, tam_array_in);

    printf("\n\n");

    convierte(array_in, tam_array_in, array_out, tam_array_out);
    print_float_array(array_out, tam_array_out);

    return 0;
}

void print_uchar_array(unsigned char *buf, int count){
    for (size_t i = 0; i < count; i++) {
        printf("%d, ", buf[i]);
    }
}

void fill_with_random(unsigned char *buf, int count) {
    unsigned char num;

    for(size_t i = 0; i < count; ++i){
        num = rand();
        buf[i] = num;
    }
}

void convierte(unsigned char *cadena, int tam_in, float *datos, int tam_out){


int conver1 (int cad1,int cad2, short salida);


         short nukaworld=0;
         short new_vegas1=0;
         short new_vegas2=0;
         short new_vegas3=0;
         short farharbor=0;
         short farharbor1=0;
         short farharbor2=0;
         int farharbor3=0;
         short vault_tec=0;
         short vault_tec1=0;
         int vault_tec2=0;
         short wasteland=0;
         short wasteland0=0;
         short wasteland1=0;
         short wasteland2=0;
         short wasteland3=0;
         short brokensteel0=0;
         short brokensteel1=0;
         short brokensteel2=0;
         short brokensteel3=0;
         short anchorage0=0;
         short anchorage1=0;
         short anchorage2=0;
         short anchorage3=0;
          short anchoragea=0;
         short point_lookout0=0;
         short point_lookout1=0;
         short point_lookout2=0;
         short point_lookout3=0;
         short mothership0=0;
         short mothership1=0;
         short mothership2=0;
         short mothership3=0;
          short mothership4=0;


         short automatron=0;


         float magne = 2.56;
         float dps=0.076335877;
         float acce= 0.000061035;

         float barometro = 0.008;
         float valor = 0.080566;
         float sensibilidad= 0.185;
         float relacion = 0.000244;
         float rev=0.000244;
         float pasos = 186.81818182;

//-------------------------magx-------------------
float magx;

         nukaworld=conver1(cadena[0],cadena[1],nukaworld);
         magx=nukaworld*magne;
         // printf("magnetometro: %f\n ", magx);

//--------------------------------------------------------
//--------------------------------magy-----------------------


        float magy;
        nukaworld=conver1(cadena[2],cadena[3],nukaworld);
        magy=nukaworld*magne;
        // printf("magnetometro: %f\n ", magy);


//-----------------------------------------------------
//--------------------------------magz-----------------------

         float magz;
         nukaworld=conver1(cadena[4],cadena[5],nukaworld);
         magz=nukaworld*magne;
         // printf("magnetometro: %f\n ", magz);



 //-------------------------acelerometro en x-------------------

                   float acelx;
                   nukaworld=conver1(cadena[6],cadena[7],nukaworld);
                   acelx=nukaworld*dps;
                   // printf("acelerometro: %f\n ", acelx);

  //--------------------------------------------------------
  //--------------------------------acelerometro en y-----------------------


                  float acely;
                  nukaworld=conver1(cadena[8],cadena[9],nukaworld);
                  acely=nukaworld*dps;
                   //printf("acelerometro: %f\n ", acely);


  //-----------------------------------------------------
  //--------------------------------acelerometro en z-----------------------

                   float acelz;
                   nukaworld=conver1(cadena[10],cadena[11],nukaworld);
                   acelz=nukaworld*dps;
                 //   printf("acelerometro: %f\n ", acelz);

   //-------------------------giroscopio en x-------------------
                    float girox;

                     nukaworld=conver1(cadena[12],cadena[13],nukaworld);
                     girox=nukaworld*dps;
                    //  printf("giroscopio: %f\n ", girox);
   //--------------------------------------------------------
    //--------------------------------giroscopio en y-----------------------

                    float giroy;
                    nukaworld=conver1(cadena[14],cadena[15],nukaworld);
                    giroy=nukaworld*dps;
                  //   printf("giroscopio: %f\n ", giroy);


 //-----------------------------------------------------
   //--------------------------------giroscopio en z-----------------------

                float giroz;
                nukaworld=conver1(cadena[16],cadena[17],nukaworld);
                 giroz=nukaworld*magne;
                // printf("giroscopio: %f\n ", giroz);

//--------------------------------------------------------------------------
//--------------------------------barometro------------------------------

        automatron= (int)(cadena[20]);

        float barome;

        automatron & 0xf0;
        automatron >>=4;



        new_vegas1=(short)(cadena[19]);

        new_vegas2=new_vegas1 & 0x0f;
        new_vegas2 <<=4;


        farharbor = new_vegas2 | automatron;

        new_vegas3=new_vegas1& 0xf0;
        new_vegas3 <<=4;

        farharbor1= farharbor | new_vegas3;



        vault_tec=(short)cadena[18];

        vault_tec1=vault_tec& 0x0f;
        vault_tec1 <<= 12;

        farharbor2= farharbor1 | vault_tec1;

        vault_tec2=vault_tec & 0xf0;
        vault_tec2<<=12;

        farharbor3= farharbor2 | vault_tec2;

        barome=farharbor3;//*barometro;



//------------------------sensor de corriente ----------
//--------------------------------------------------

        float tempe1;
        wasteland= (int)cadena[20];
        wasteland0=wasteland& 0x0f;
        wasteland0<<=8;

        wasteland1=(int)cadena[21];

        wasteland2=wasteland0 | wasteland1;
        tempe1 = wasteland2/1000;


        //-------------------------sensor fisico 1-------------------
        float fis1;

                 nukaworld=conver1(cadena[22],cadena[23],nukaworld);
                 fis1=nukaworld*10;
                 // printf("magnetometro: %f\n ", magx);

        //--------------------------------------------------------
        //--------------------------------sensor fisisco 2-----------------------


                float magy;
                nukaworld=conver1(cadena[24],cadena[25],nukaworld);
                fis2=fis2*0.01;
                // printf("magnetometro: %f\n ", magy);


        //-----------------------------------------------------
        //--------------------------------sensor fisico 3-----------------------

                 float fis3;
                 nukaworld=conver1(cadena[26],cadena[27],nukaworld);
                 fis3=nukaworld*0.01;
                 // printf("magnetometro: %f\n ", magz);



         //-------------------------sensor fisico 4-------------------

                           float fis4;
                           nukaworld=conver1(cadena[28],cadena[29],nukaworld);
                           fis4=nukaworld*0.01;
                           // printf("acelerometro: %f\n ", acelx);





          datos[0]=magx;
          datos[1]=magy;
          datos[2]=magz;
          datos[3]=acelx;
          datos[4]=acely;
          datos[5]=acelz;
          datos[6]=girox;
          datos[7]=giroy;
          datos[8]=giroz;
          datos[9]=barome;
          datos[10]=fis1;
          datos[11]=fis2;
          datos[12]=fis3;
          datos[13]=corriente;
          datos[14]=fis4;
         


}
int conver1 (int cad1,int cad2, short salida)
{
        short   entero,entero2;
        short massfusion=0;

        entero=(int)cad1;
        entero2=(int)cad2;
        entero<<=8;
        salida= entero | entero2;


        //printf("entero = %i\n",salida);
        return salida;
}

void print_float_array(float *buf, int count){
    /*Si quieres imprimir con mas o menos decimales, solo cambia los valores
    de %.8f. Esto es solo la impresion, ya que en el fondo el float almacena
    muchos mas decimales.*/
    for (size_t i = 0; i < count; i++) {
        printf("%.f, ", buf[i]);
    }
}
