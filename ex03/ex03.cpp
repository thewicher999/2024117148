const int ledPin = 2;  // ESP32板载LED

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(115200);
  Serial.println("SOS 开始...");
}

void loop() {
  // === S: 短闪3次 ===
  for(int i = 0; i < 3; i++) { 
    digitalWrite(ledPin, HIGH); 
    delay(200); 
    digitalWrite(ledPin, LOW); 
    delay(200); 
  }
  delay(500); // 字母间隔

  // === O: 长闪3次 ===
  for(int i = 0; i < 3; i++) { 
    digitalWrite(ledPin, HIGH); 
    delay(600); 
    digitalWrite(ledPin, LOW); 
    delay(200); 
  }
  delay(500); // 字母间隔

  // === S: 短闪3次 ===
  for(int i = 0; i < 3; i++) { 
    digitalWrite(ledPin, HIGH); 
    delay(200); 
    digitalWrite(ledPin, LOW); 
    delay(200); 
  }
  delay(2000); // 单词间隔（SOS播放完后的长停顿）
}
