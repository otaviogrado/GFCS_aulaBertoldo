char incomingByte = 0; // variável para o dado recebido

void setup() {
  Serial.begin(9600); // abre a porta serial, configura a taxa de transferência para 9600 bps
}

void loop() {
  // apenas responde quando dados são recebidos:
  if (Serial.available() > 0) {                                     
    // lê do buffer o dado recebido:
    incomingByte = Serial.read();
    if(incomingByte == 'c')                                         // criar um função e documentação para esse tipo de comando ~ protocolo comunicacao
    {
      float altitude = Serial.parseFloat();                         // leitura do serial um float
      Serial.print("Voce alterou a altitude para\t"); 
      Serial.println(altitude);
    }
    else
    {
    // responde com o dado recebido:
    Serial.print("Eu recebi:\t");
    Serial.println(incomingByte);     
    }
  }
}
