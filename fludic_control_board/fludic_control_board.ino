void setup() {
  pinMode(12,INPUT); // Mode Selector input toggle switches or code
  pinMode(0,OUTPUT);  pinMode(1,OUTPUT);  pinMode(2,OUTPUT);  pinMode(3,OUTPUT);  pinMode(4,OUTPUT);  pinMode(5,OUTPUT); // Relays (values) low activated
                                                                                                                          /*   2 == RED (1st)    ,  4 == Orange(2nd), 0 == yellow (3rd),  
                                                                                                                               1 == magenda (4th),  5 == Grey (5th) , */
                                                                                                                               
  pinMode(46,INPUT);pinMode(48,INPUT);pinMode(50,INPUT);pinMode(52,INPUT); // Toggle Switches /* 46 == Grey (4th) , 48 == Magenda (3rd) , 50 == Blue (2nd) , 52 == Green (1st) */
     /* switching off all the relayds initially*/
     digitalWrite(2,1);
     digitalWrite(4,1);
     digitalWrite(0,1);
     digitalWrite(1,1);
     digitalWrite(5,1);
     digitalWrite(3,1); 

}
void loop() 
{
  if (digitalRead(12)==LOW)
  {
     digitalWrite(2,digitalRead(52));
     digitalWrite(4,digitalRead(50));
     digitalWrite(0,digitalRead(48));
     digitalWrite(1,digitalRead(46));
  }
else if (digitalRead(12)==HIGH)
{
  // Write your Robot working code here
     digitalWrite(2,0);
     delay(1000);
     digitalWrite(2,1);
     delay(100);
     digitalWrite(4,0);
     delay(1000);
     digitalWrite(4,1);
}





}
   
  
  
