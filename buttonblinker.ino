//按钮控制LED的亮灭，按下亮，松开则灭
const int buttonpin = 2;//button连接引脚
int ledpin = 12;//led连接引脚
 
void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin, OUTPUT);//设置led连接引脚为输出模式
  pinMode(buttonpin, INPUT);  //设置button连接引脚为输入模式
}
 
void loop() {
  // 检测按钮是否被按下 repeatedly:
  boolean buttonstate = digitalRead(buttonpin);
  if(buttonstate == 1){
    digitalWrite(ledpin, 0);}
  else{digitalWrite(ledpin, 1);}
}