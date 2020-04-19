int r1 = 1;
int y1 = 2; //lights of lane 1
int g1 = 3;

int r2 = 4;
int y2 = 5;//lights of lane 2
int g2 = 6;

int r3 = 7;
int y3 = 8;//lights of lane 3
int g3 = 9;

int r4 = 10;
int y4 = 11;//lights of lane 4
int g4 = 12;
void setup() {
pinMode (r1, OUTPUT);
pinMode (y1, OUTPUT);
pinMode (g1, OUTPUT);

pinMode (r2, OUTPUT);
pinMode (y2, OUTPUT);
pinMode (g2, OUTPUT);
                     //defining all pins for output
pinMode (r3, OUTPUT);
pinMode (y3, OUTPUT);
pinMode (g3, OUTPUT);

pinMode (r4, OUTPUT);
pinMode (y4, OUTPUT);
pinMode (g4, OUTPUT);
}

void loop() {
  
digitalWrite(g1, HIGH);
digitalWrite(r2, HIGH);
digitalWrite(r3, HIGH);//1st lane green light and other lane red light turn ON
digitalWrite(r4, HIGH);

delay(3000);// 3 sec delay

digitalWrite(g1, LOW);
digitalWrite(r2, LOW);//1st lane green light and 2nd lane red light turn OFF and yellow light of both lane will ON 
digitalWrite(y1, HIGH);
digitalWrite(y2, HIGH);

delay (1000);// 1 sec delay

digitalWrite(y1, LOW);
digitalWrite(y2, LOW);//2nd lane green light and 1st lane red light turn ON and yellow light of both lane will OFF
digitalWrite(g2, HIGH);
digitalWrite(r1, HIGH);

delay (3000);

digitalWrite(g2, LOW);
digitalWrite(r3, LOW);//2nd lane green light and 3rd lane red light turn OFF and yellow light of both lane will ON 
digitalWrite(y2, HIGH);
digitalWrite(y3, HIGH);

delay (1000);

digitalWrite(y2, LOW);
digitalWrite(y3, LOW);//3rd lane green light and 2nd lane red light turn ON and yellow light of both lane will OFF 
digitalWrite(g3, HIGH);
digitalWrite(r2, HIGH);

delay(3000);

digitalWrite(g3, LOW);
digitalWrite(r4, LOW);//3rd lane green light and 4th lane red light turn OFF and yellow light of both lane will ON 
digitalWrite(y3, HIGH);
digitalWrite(y4, HIGH);

delay(1000);

digitalWrite(y3, LOW);
digitalWrite(y4, LOW);//4th lane green light and 3rd lane red light turn ON and yellow light of both lane will OFF 
digitalWrite(g4, HIGH);
digitalWrite(r3, HIGH);

delay(3000);

digitalWrite(g4, LOW);
digitalWrite(r1, LOW);//1st lane green light and 2nd lane red light turn OFF and yellow light of both lane will ON 
digitalWrite(y4, HIGH);
digitalWrite(y1, HIGH);

delay(1000);

digitalWrite(y4, LOW);
digitalWrite(y1, LOW);//yellow light of 1st and 2nd lane will OFF
}
