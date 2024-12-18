//LISTA PRÁTICA ARDUINO//
/*1) "cameraData"é um vetor de inteiros com capacidade para armazenar 10 valores utilizando Arduino,
como deve ser declarado? */ 

int cameraData[10]; // Essa é uma das formas de declarar "camera data"
int cameraData[10] = {a, b, c, d, e, f, g, h, i, j}; // sendo a, b, c, d, e, f, g, h, i, j números inteiros; essa é outra forma de declarar "camaraData" já atribuindo valores para a matriz.

/*2) Qual é a função do código cameraData[3] = analogRead(A1); em um programa Arduino que utiliza
um vetor?*/

cameraData[3] = analogRead(A1); //tem como função ler o sinal analógigo conectado ao pino A1 e gravar o valor na quarta posição do vetor 

/*3) Explique como realizar a inicialização de um vetor de floats chamado "temperaturas"com os valores 25.5, 26.0, 24.8, 27.3 e 26.5.*/

float temperaturas[] = {25.5, 26.0, 24.8, 27.3, 26.5}; //utiliza-se o float devido aos valores atribuidos serem decimais 

/* 4) Explique a função do código abaixo e qual seria a possível resposta do mesmo.
 for ( int i = 0; i < 4; i ++) {
 Serial . println ( ledPins [ i ]);
 }*/

 for (int i = 0; i < 4; i++) { // o laço for é utilizado para repetir os índices do vetor denominando ledPins
    Serial.println(ledPins[i]); // a cada repetição ele imprime no monitor serial (Serial.println) ou seja "printa" na tela o valor armazenado em ledPins[i] (o valor do índice do vetor), assim sucessivamente
    }
    // A saída dependerá dos valores depositados no vetor ledPins[], por exemplo ledPins[] = {4, 5, 6, 7}
    // O código imprimirá:
    /*
    4
    5
    6
    7
    */

/* 5) Com base no código da questão 4, complete a estrutura necessária para que o mesmo seja executado
na IDE do Arduino.*/
int ledPins[] = {4, 5, 6, 7}; // Pinos do leds

void setup() {
    Serial.begin(9600); 
}

void loop() {
    for (int i = 0; i < 4; i++) {
        Serial.println(ledPins[i]); // Imprime os valores no monitor serial
    }
    delay(1000); 
}

/* 6) Como utilizar a função random() para atribuir valores aleatórios a cada elemento de um vetor "randomValues"de tamanho 5? */

int randomValues[5]; // a função random é utilizada para gerar números aleatórios

void setup() {
    Serial.begin(9600); 
    randomSeed(analogRead(0)); 

    for (int i = 0; i < 5; i++) {
        randomValues[i] = random(1, 101); // Códigos aleatórios entre 1 e 100
        Serial.println(randomValues[i]); // Imprime os valores no monitor serial
    }
}


/*7) Descreva a implementação do código a seguir:
 for ( int i = 0; i < tamanhoVetor ; i ++) {
 if ( sensorReadings [ i ] == 150) {
 break ;
 }
}*/ 

for (int i = 0; i < tamanhoVetor; i++) { // enquanto o tamanho do vetor for menor que o índice i os comandos dentro do laço for são válidos  
    if (sensorReadings[i] == 150) { // caso o código encontre um valor igual a 150 ele deve parar 
        break;
    }
}

//O código acima pode ser utilizado para buscar um valor específico e parar quando este for encontrado

/*8) Descreva a função da instrução sizeof(sensorData) / sizeof(sensorData[0]) ao determinar o tamanho de um vetor "sensorData"em um programa Arduino.*/

int sensorData[20];
int tamanho = sizeof(sensorData) / sizeof(sensorData[0]); // Resultado: 20










