/*
   Group Comment
   Find Prime no.
   We are going to check is number prime or not.
*/
// This is a line comment

int checkNumber = 577 ;
bool result = true; // true
int remainder2 = -1;
int Divident = -1;
int i = 2;
void setup() {
  // put your setup code here, to run once:
  // Serial Coomunication, UART
  Serial.begin(9600);
  // We divide the number from 2 to n/2
  // if and else statemet.
  while (i < checkNumber) {
    remainder2 = checkNumber % i;
    Serial.print("Remainder when divide by ");
    Serial.print(i);
    Serial.print(" is =");
    Serial.println(remainder2);
    if (remainder == 0) {
      result = false;
      break;
    }
    else {
      i = i + 1;
    }
  }
  Serial.print("Number ");
  Serial.print(checkNumber);
  Serial.print("is ");
  Serial.print(result);
  Serial.print(" for prime.");
}

void loop() {
  // put your main code here, to run repeatedly:

}