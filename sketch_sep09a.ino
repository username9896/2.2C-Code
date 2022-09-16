
void dot() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(700);
  digitalWrite(LED_BUILTIN, LOW);
  delay(400);
}

void dash() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(400);
}

void nameconvert()
{
  String username = Serial.readString();
  username.toUpperCase();
  Serial.println("Please enter your name " + username);
  
  for (int i = 0; i < username.length(); i++)
  {
    if (username[i] == 'A')
    {
      dot(); dash();
    }
    if (username[i] == 'B')
    {
      dash(); dot(); dot(); dot();
    }
    if (username[i] == 'C')
    {
      dash(); dot(); dash(); dot();
    }
    if (username[i] == 'D')
    {
      dash(); dot(); dot();
    }
    if (username[i] == 'E')
    {
      dot();
    }
    if (username[i] == 'F')
    {
      dot(); dot(); dash(); dot();
    }
    if (username[i] == 'G')
    {
      dash(); dash(); dot();
    }
    if (username[i] == 'H')
    {
      dot(); dot(); dot(); dot();
    }
    if (username[i] == 'I')
    {
      dot(); dot();
    }
    if (username[i] == 'J')
    {
      dot(); dash(); dash(); dash();
    }
    if (username[i] == 'K')
    {
      dash(); dot(); dash();
    }
    if (username[i] == 'L')
    {
      dot(); dash(); dot(); dot();
    }
    if (username[i] == 'M')
    {
      dash(); dash();
    }
    if (username[i] == 'N')
    {
      dash(); dot();
    }
    if (username[i] == 'O')
    {
      dash(); dash(); dash();
    }
    if (username[i] == 'P')
    {
      dot(); dash(); dash(); dot();
    }
    if (username[i] == 'Q')
    {
      dash(); dash(); dot(); dash();
    }
    if (username[i] == 'R')
    {
      dot(); dash(); dot();
    }
    if (username[i] == 'S')
    { dot(); dot(); dot();

    }
    if (username[i] == 'T')
    {
      dash();
    }
    if (username[i] == 'U')
    {
      dot(); dot(); dash();
    }
    if (username[i] == 'V')
    {
      dot(); dot(); dot(); dash();
    }
    if (username[i] == 'W')
    {
      dot(); dash(); dash();
    }
    if (username[i] == 'X')
    {
      dash(); dot(); dot(); dash();
    }
    if (username[i] == 'Y')
    {
      dash(); dot(); dash(); dash();
    }
    if (username[i] == 'Z')
    {
      dash(); dash(); dot(); dot();
    }
  }
}

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  nameconvert();
}
