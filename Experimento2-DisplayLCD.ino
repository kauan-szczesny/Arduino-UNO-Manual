#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);			//define os pinos do display

void setup()
{
	lcd.begin(16, 2); 							          //inicializa o display
	lcd.clear();								              //limpa o display
	lcd.print("hello, world!"); 				      // envia a mensagem pro display
}

void loop()
{		
  lcd.setCursor(0, 1); 						          //define cursor para a coluna 0							
	lcd.print(millis() / 1000); 				      //define o num de segundos
}
