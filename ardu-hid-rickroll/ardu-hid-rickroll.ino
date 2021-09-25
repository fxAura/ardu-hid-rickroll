#include <Keyboard.h>
void pressEnter() {
Keyboard.press(KEY_RETURN);
delay(50);
Keyboard.release(KEY_RETURN);
}

void setup() {
 Keyboard.begin(); // Начало эмуляции клавиатуры
 delay(5000); // Задержка 5 секунд
 Keyboard.press(KEY_LEFT_GUI); // Нажимаем клавишу «Meta»
 delay(5000);
 Keyboard.release(KEY_LEFT_GUI); // Отпускаем ее
 delay(600);
 Keyboard.print("terminal"); // Пишем в поиске
 delay(600);
 pressEnter();
 delay(1500);
 Keyboard.print("echo we do a little trolling"); // Здесь пишем то, что хотим
 delay(100);
 pressEnter();
 delay(500);
 Keyboard.print("firefox https://www.youtube.com/watch?v=dQw4w9WgXcQ"); //Замените firefox на chrome/opera/ваш другой браузер
 delay(100);
 pressEnter();
}

void loop() {

}
