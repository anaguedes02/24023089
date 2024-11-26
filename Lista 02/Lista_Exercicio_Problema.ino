/* PROBLEMA
Em um projeto de monitoramento ambiental, um dispositivo Arduino foi configurado para coletar dados de sensores que medem três variáveis ambientais em diferentes locais ao longo do tempo. 
As variáveis monitoradas são: temperatura (em graus Celsius), umidade do solo (em percentagem), e concentração de CO2 (em partes por milhão - ppm).
A matriz ambientData foi criada para armazenar esses dados, onde cada linha representa um local de monitoramento e cada coluna representa uma leitura em um determinado momento. 
A seguir, encontra-se a matriz representativa:
 int ambientData [3][5] = {
 {22 , 25 , 23 , 21 , 24} ,
 {45 , 38 , 42 , 40 , 37} ,
 {400 , 380 , 420 , 410 , 390}
 };
Perguntas:
a. Como você interpreta os dados contidos na primeira linha da matriz ambientData em relação à temperatura?

A primeira linha {22 , 25 , 23 , 21 , 24} é equivalente aos valores da temperatura em graus Celsius no monitoramento, cada coluna corresponde a uma leitura no tempo.

b. Qual é a média da umidade do solo nos cinco momentos registrados no segundo local de monitoramento?

A média da umidade do solo é a soma dos valores da segunda linha dividido pela quantidade de valores da segunda linha, ou seja, é a soma dos valores obtidos pelo 
monitoramento (45 + 38 + 42 + 40 + 37) dividido pela sua quantidade (os valores foram cinco {45 , 38 , 42 , 40 , 37}). Dessa forma, a média da umidade do solo é 202/5 = 40.4

c. Determine o momento em que a concentração de CO2 atingiu seu valor máximo no terceiro local de monitoramento.

A concentração de CO2 atingiu seu valor máximo em sua terceira leitura (indice 2) que foi 420 ppm.

d. Crie um trecho de código Arduino que utilize a matriz ambientData para calcular e imprimirva média de temperatura em todos os locais monitorados.
Parte do código da pergunta "d"está implementado logo a seguir. Complete o
mesmo.
1 int totalLocais = 3;
2 int totalLeituras = 5;
3 int somaTemperaturas = 0;
4
5 for ( int i = 0; i < totalLocais ; i ++) { 
6 for ( int j = 0; j < totalLeituras ; j ++) {
7 somaTemperaturas += ambientData [ i ][ j ];
8 }
9 } */ 
int ambientData[3][5] = {
    {22, 25, 23, 21, 24}, 
    {45, 38, 42, 40, 37}, 
    {400, 380, 420, 410, 390} 
};

void setup() {
    Serial.begin(9600);

    int totalLocais; 
    int totalLeituras = 5;
    int somaTemperaturas = 0;

    
    for ( int i = 0; i < totalLocais ; i ++) { 
      for ( int j = 0; j < totalLeituras ; j ++) {
        somaTemperaturas += ambientData [ i ][ j ];
        }
        } 

   
    float mediaTemperaturas = somaTemperaturas / (float)totalLeituras;

    
    Serial.print("Média de temperatura em todos os locais: ");
    Serial.println(mediaTemperaturas);
}

void loop() {
    // Nada é necessário no loop
}
