#include <Key.h>
#include <Keypad.h>
#include <LiquidCrystal.h>
#include "musicas.h"

//teclado
const byte numLinhas = 4;   //Quantidade de linhas do teclado
const byte numColunas = 4;  //Quantidade de colunas do teclado
byte pinosLinhas[numLinhas] = { 9, 8, 7, 6 };        //Pinos das linhas
byte pinosColunas[numColunas] = { 10, 11, 12, 13 };  //Pinos das Colunas
//Matriz de caracteres referente aos botões do teclado
char teclasMatriz[numLinhas][numColunas] = {
  { '1', '2', '3', '4' },
  { '5', '6', '7', '8' },
  { '9', '0', 'A', 'B' },
  { 'C', 'D', 'E', '#' }
};
//Cria um objeto do tipo Keypad
Keypad meuteclado = Keypad(makeKeymap(teclasMatriz), pinosLinhas,
                           pinosColunas, numLinhas, numColunas);

//pinagem LCD
#define V0 5  //Contraste Controlado PWM
#define RS 4
#define RW 3
#define E 2
#define D4 14
#define D5 15
#define D6 16
#define D7 17

//inicializa LCD
LiquidCrystal lcd(RS, RW, E, D4, D5, D6, D7);

//melodias
int Imperial_March[] = {
  
  // Dart Vader theme (Imperial March) - Star wars 
  // Score available at https://musescore.com/user/202909/scores/1141521
  // The tenor saxophone part was used
  
  NOTE_A4,-4, NOTE_A4,-4, NOTE_A4,16, NOTE_A4,16, NOTE_A4,16, NOTE_A4,16, NOTE_F4,8, PAUSE,8,
  NOTE_A4,-4, NOTE_A4,-4, NOTE_A4,16, NOTE_A4,16, NOTE_A4,16, NOTE_A4,16, NOTE_F4,8, PAUSE,8,
  NOTE_A4,4, NOTE_A4,4, NOTE_A4,4, NOTE_F4,-8, NOTE_C5,16,

  NOTE_A4,4, NOTE_F4,-8, NOTE_C5,16, NOTE_A4,2,//4
  NOTE_E5,4, NOTE_E5,4, NOTE_E5,4, NOTE_F5,-8, NOTE_C5,16,
  NOTE_A4,4, NOTE_F4,-8, NOTE_C5,16, NOTE_A4,2,
  
  NOTE_A5,4, NOTE_A4,-8, NOTE_A4,16, NOTE_A5,4, NOTE_GS5,-8, NOTE_G5,16, //7 
  NOTE_DS5,16, NOTE_D5,16, NOTE_DS5,8, PAUSE,8, NOTE_A4,8, NOTE_DS5,4, NOTE_D5,-8, NOTE_CS5,16,

  NOTE_C5,16, NOTE_B4,16, NOTE_C5,16, PAUSE,8, NOTE_F4,8, NOTE_GS4,4, NOTE_F4,-8, NOTE_A4,-16,//9
  NOTE_C5,4, NOTE_A4,-8, NOTE_C5,16, NOTE_E5,2,

  NOTE_A5,4, NOTE_A4,-8, NOTE_A4,16, NOTE_A5,4, NOTE_GS5,-8, NOTE_G5,16, //7 
  NOTE_DS5,16, NOTE_D5,16, NOTE_DS5,8, PAUSE,8, NOTE_A4,8, NOTE_DS5,4, NOTE_D5,-8, NOTE_CS5,16,

  NOTE_C5,16, NOTE_B4,16, NOTE_C5,16, PAUSE,8, NOTE_F4,8, NOTE_GS4,4, NOTE_F4,-8, NOTE_A4,-16,//9
  NOTE_A4,4, NOTE_F4,-8, NOTE_C5,16, NOTE_A4,2,
  
};

int Game_of_Thrones[] = {

  // Game of Thrones
  // Score available at https://musescore.com/user/8407786/scores/2156716

  NOTE_G4,8, NOTE_C4,8, NOTE_DS4,16, NOTE_F4,16, NOTE_G4,8, NOTE_C4,8, NOTE_DS4,16, NOTE_F4,16, //1
  NOTE_G4,8, NOTE_C4,8, NOTE_DS4,16, NOTE_F4,16, NOTE_G4,8, NOTE_C4,8, NOTE_DS4,16, NOTE_F4,16,
  NOTE_G4,8, NOTE_C4,8, NOTE_E4,16, NOTE_F4,16, NOTE_G4,8, NOTE_C4,8, NOTE_E4,16, NOTE_F4,16,
  NOTE_G4,8, NOTE_C4,8, NOTE_E4,16, NOTE_F4,16, NOTE_G4,8, NOTE_C4,8, NOTE_E4,16, NOTE_F4,16,
  NOTE_G4,-4, NOTE_C4,-4,//5

  NOTE_DS4,16, NOTE_F4,16, NOTE_G4,4, NOTE_C4,4, NOTE_DS4,16, NOTE_F4,16, //6
  NOTE_D4,-1, //7 and 8
  NOTE_F4,-4, NOTE_AS3,-4,
  NOTE_DS4,16, NOTE_D4,16, NOTE_F4,4, NOTE_AS3,-4,
  NOTE_DS4,16, NOTE_D4,16, NOTE_C4,-1, //11 and 12

  //repeats from 5
  NOTE_G4,-4, NOTE_C4,-4,//5

  NOTE_DS4,16, NOTE_F4,16, NOTE_G4,4, NOTE_C4,4, NOTE_DS4,16, NOTE_F4,16, //6
  NOTE_D4,-1, //7 and 8
  NOTE_F4,-4, NOTE_AS3,-4,
  NOTE_DS4,16, NOTE_D4,16, NOTE_F4,4, NOTE_AS3,-4,
  NOTE_DS4,16, NOTE_D4,16, NOTE_C4,-1, //11 and 12
  NOTE_G4,-4, NOTE_C4,-4,
  NOTE_DS4,16, NOTE_F4,16, NOTE_G4,4,  NOTE_C4,4, NOTE_DS4,16, NOTE_F4,16,

  NOTE_D4,-2,//15
  NOTE_F4,-4, NOTE_AS3,-4,
  NOTE_D4,-8, NOTE_DS4,-8, NOTE_D4,-8, NOTE_AS3,-8,
  NOTE_C4,-1,
  NOTE_C5,-2,
  NOTE_AS4,-2,
  NOTE_C4,-2,
  NOTE_G4,-2,
  NOTE_DS4,-2,
  NOTE_DS4,-4, NOTE_F4,-4, 
  NOTE_G4,-1,
  
  NOTE_C5,-2,//28
  NOTE_AS4,-2,
  NOTE_C4,-2,
  NOTE_G4,-2, 
  NOTE_DS4,-2,
  NOTE_DS4,-4, NOTE_D4,-4,
  NOTE_C5,8, NOTE_G4,8, NOTE_GS4,16, NOTE_AS4,16, NOTE_C5,8, NOTE_G4,8, NOTE_GS4,16, NOTE_AS4,16,
  NOTE_C5,8, NOTE_G4,8, NOTE_GS4,16, NOTE_AS4,16, NOTE_C5,8, NOTE_G4,8, NOTE_GS4,16, NOTE_AS4,16,
  
  PAUSE,4, NOTE_GS5,16, NOTE_AS5,16, NOTE_C6,8, NOTE_G5,8, NOTE_GS5,16, NOTE_AS5,16,
  NOTE_C6,8, NOTE_G5,16, NOTE_GS5,16, NOTE_AS5,16, NOTE_C6,8, NOTE_G5,8, NOTE_GS5,16, NOTE_AS5,16,  
};

int Star_Wars_Cantina[] = {
  
  // Cantina BAnd - Star wars 
  // Score available at https://musescore.com/user/6795541/scores/1606876
  NOTE_B4,-4, NOTE_E5,-4, NOTE_B4,-4, NOTE_E5,-4, 
  NOTE_B4,8,  NOTE_E5,-4, NOTE_B4,8, PAUSE,8,  NOTE_AS4,8, NOTE_B4,8, 
  NOTE_B4,8,  NOTE_AS4,8, NOTE_B4,8, NOTE_A4,8, PAUSE,8, NOTE_GS4,8, NOTE_A4,8, NOTE_G4,8,
  NOTE_G4,4,  NOTE_E4,-2, 
  NOTE_B4,-4, NOTE_E5,-4, NOTE_B4,-4, NOTE_E5,-4, 
  NOTE_B4,8,  NOTE_E5,-4, NOTE_B4,8, PAUSE,8,  NOTE_AS4,8, NOTE_B4,8,
  NOTE_A4,-4, NOTE_A4,-4, NOTE_GS4,8, NOTE_A4,-4,
  NOTE_D5,8,  NOTE_C5,-4, NOTE_B4,-4, NOTE_A4,-4,
  NOTE_B4,-4, NOTE_E5,-4, NOTE_B4,-4, NOTE_E5,-4, 
  NOTE_B4,8,  NOTE_E5,-4, NOTE_B4,8, PAUSE,8,  NOTE_AS4,8, NOTE_B4,8,
  NOTE_D5,4, NOTE_D5,-4, NOTE_B4,8, NOTE_A4,-4,
  NOTE_G4,-4, NOTE_E4,-2,
  NOTE_E4, 2, NOTE_G4,2,
  NOTE_B4, 2, NOTE_D5,2,
  NOTE_F5, -4, NOTE_E5,-4, NOTE_AS4,8, NOTE_AS4,8, NOTE_B4,4, NOTE_G4,4, 

};

#define t_Imperial_March 144
#define t_Game_Of_Thrones 85
#define t_Cantina_Band 140


#define buzzer 18

void setup() {
  Serial.begin(9600);                                             //Inicia a comunicação serial
  Serial.println("Aperte um botão para selecionar a música...");  //Imprime mensagem no monitor serial
  lcd.begin(16, 2);                                               //Colunas, linhas. Use 16,2 para display LCD 16x2
  pinMode(V0, OUTPUT);
  analogWrite(V0, 350);  // Liga backlight. Testar valor de melhor contraste.
  lcd.display();         // Liga Display:
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Selecione a ");
  lcd.setCursor(0, 1);
  lcd.print("musica: ");
}

void loop() {
  char pressionado = meuteclado.getKey();  ///Verifica se alguma tecla foi pressionada
  if (pressionado) {                       //Se alguma tecla foi pressionada
    Serial.print("Musica selecionada: ");  //Imprime mensagem no monitor serial
    Serial.println(pressionado);           //Imprime tecla pressionada
    lcd.clear();
    lcd.setCursor(0, 1);
    lcd.print("Musica: ");
    lcd.print(pressionado);
    switch (pressionado) {  //tocar a música
      case '1':             //Star Wars - Imperial March
        {
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.print("Tocando: ");
          lcd.setCursor(0, 1);
          lcd.print("Imperial March");
          int notes = sizeof(Imperial_March) / sizeof(Imperial_March[0]) / 2;
          // this calculates the duration of a whole note in ms
          int wholenote = (60000 * 4) / t_Imperial_March;
          int divider = 0, noteDuration = 0;
          for (int thisNote = 0; thisNote < notes * 2; thisNote = thisNote + 2) {
            // calculates the duration of each note
            divider = Imperial_March[thisNote + 1];
            if (divider > 0) {
              // regular note, just proceed
              noteDuration = (wholenote) / divider;
            } else if (divider < 0) {
              // dotted notes are represented with negative durations!!
              noteDuration = (wholenote) / abs(divider);
              noteDuration *= 1.5;  // increases the duration in half for dotted notes
            }
            // we only play the note for 90% of the duration, leaving 10% as a pause
            tone(buzzer, Imperial_March[thisNote], noteDuration * 0.9);

            // Wait for the specief duration before playing the next note.
            delay(noteDuration);

            // stop the waveform generation before the next note.
            noTone(buzzer);
          }
          break;
        }
      case '2':  // Game Of Thrones
        {
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.print("Tocando: ");
          lcd.setCursor(0, 1);
          lcd.print("Game Of Thrones");
          int notes = sizeof(Game_of_Thrones) / sizeof(Game_of_Thrones[0]) / 2;
          // this calculates the duration of a whole note in ms
          int wholenote = (60000 * 4) / t_Game_Of_Thrones;
          int divider = 0, noteDuration = 0;
          for (int thisNote = 0; thisNote < notes * 2; thisNote = thisNote + 2) {
            // calculates the duration of each note
            divider = Game_of_Thrones[thisNote + 1];
            if (divider > 0) {
              // regular note, just proceed
              noteDuration = (wholenote) / divider;
            } else if (divider < 0) {
              // dotted notes are represented with negative durations!!
              noteDuration = (wholenote) / abs(divider);
              noteDuration *= 1.5;  // increases the duration in half for dotted notes
            }
            // we only play the note for 90% of the duration, leaving 10% as a pause
            tone(buzzer, Game_of_Thrones[thisNote], noteDuration * 0.9);

            // Wait for the specief duration before playing the next note.
            delay(noteDuration);

            // stop the waveform generation before the next note.
            noTone(buzzer);
          }
          break;
        }
      case '3':  // Star Wars Cantina
        {
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.print("Tocando: ");
          lcd.setCursor(0, 1);
          lcd.print("Star Wars Cantina Band");
          int notes = sizeof(Star_Wars_Cantina) / sizeof(Star_Wars_Cantina[0]) / 2;
          // this calculates the duration of a whole note in ms
          int wholenote = (60000 * 4) / t_Cantina_Band;
          int divider = 0, noteDuration = 0;
          for (int thisNote = 0; thisNote < notes * 2; thisNote = thisNote + 2) {
            // calculates the duration of each note
            divider = Star_Wars_Cantina[thisNote + 1];
            if (divider > 0) {
              // regular note, just proceed
              noteDuration = (wholenote) / divider;
            } else if (divider < 0) {
              // dotted notes are represented with negative durations!!
              noteDuration = (wholenote) / abs(divider);
              noteDuration *= 1.5;  // increases the duration in half for dotted notes
            }
            // we only play the note for 90% of the duration, leaving 10% as a pause
            tone(buzzer, Star_Wars_Cantina[thisNote], noteDuration * 0.9);

            // Wait for the specief duration before playing the next note.
            delay(noteDuration);

            // stop the waveform generation before the next note.
            noTone(buzzer);
          }
          break;
        }
      default:
        {

          break;
        }
    }
  }
}
