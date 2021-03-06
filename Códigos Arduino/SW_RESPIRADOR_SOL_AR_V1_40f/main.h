#ifndef _MAIN_H_
#define _MAIN_H_
#include "Arduino.h"

//--------------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------------
// Rótulos das pinagens

const int   pot_MP            =  A0;         // POTENCIÔMETRO VEL MOTOR DE PASSO
int   pot_pressao_AMBU  =  A1;         // Leitura de pressão do Ambu
const int   pot_paciente      =  A2;         // Leitura de pressão do Paciente
const int   pot_vacuo         =  A3;         // Leitura de vácuo
const int   pot_Plato         =  A4;         // Regulagem de tempo do platô

// TX0                           0           // FUTURO
// RX0                           1           // FUTURO
const int     Btn_Avanca_MP   =  2;          // Botão de avanço do motor de passo (pino 2)
const int     Btn_Recua_MP    =  3;          // Botão de recuo do motor de passo (pino  3)
const int     pulso_MP        =  5;          // Trem de pulso pra ajuste de velocidade (pino 5)
const int     Btn_enter       =  8;          // botão enter
const int     led_pino        = 13;          // Pino do LED Arduino Mega

// Rotary Encoder A             06
// Rotary Encoder B             07
// RS485                        14           // FUTURO
// RS485                        15           // FUTURO

// const int  Btn_Liga_MP     = 18;          // Botão para ligar o motor de passo
// const int  Btn_Para_MP     = 19;          // Botão de parada do motor de passo

// DISPLAY SDA                  20           // DISPLAY SDA
// DISPLAY SCL                  21           // DISPLAY SCL

int     enable_MP       = 24;          // Habilita o driver do motor de passo (pino 24)
int     dir_MP          = 25;          // Define a direçao do motor de passo  (pino 25)

const int     Falha_E         = 28;          // Sinal de falha de energia (ligar nobreak)
const int     TESTE_G         = 29;          // Botão de teste geral
const int     R1_GER          = 30;          // Relé Geral
const int     R2_AVAN         = 31;          // Relé de Avanço do motor de passo
const int     R3_RET          = 32;          // Relé de retorno do motor de passo
const int     R4_V_AMBU       = 33;          // Relé de Valvula do Ambu
const int     R5_V_02         = 34;          // Relé de oxigênio
const int     R6_V_AR         = 35;          // Relé de Ar
const int     R7_BYPASS       = 36;          // Relé de By-pass

// TECLADO  LIN1(D38)           38
// TECLADO  LIN2(D40)           40
// TECLADO  LIN3(D42)           42
// TECLADO  LIN4(D44)           44
// TECLADO  COL1(D46)           46
// TECLADO  COL2(D48)           48
// TECLADO  COL3(D50)           50
// TECLADO  COL4(D52)           52

int     CFC_Inicio      = 39;          // Chave fim de curso início (home position)
int     CFC_Fim         = 41;          // Chave fim de curso fim (limte pressão do AMBU)

const byte linhas  = 4;                      // linhas do teclado
const byte colunas = 4;                      // colunas do teclado
char Keys[linhas][colunas] =                 // Definicao dos valores das 16 teclas
{
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte LinhaPINO[linhas] =   {38, 40, 42, 44};      // Linhas do teclado D38 a D44
byte ColunaPINO[colunas] = {46, 48, 50, 52};      // Colunas do teclado D46 a D52

int LCD_address       = 0x3F;                // Endereço I2C - LCD PCF8574 = 0x27 / Gustavo = 0x3F
#endif
