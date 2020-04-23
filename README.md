# Casa Inteligente com comunicação Bluetooth
Projeto protótipo de domótica realizado com a equipe do RAS (Robotics and Automation Society) na Universidade Federal do ABC
## Sistema de exaustão para gás e fumaça
Quando o sensor de fumaça atingir um determinado valor , será acionado um exaustor, que na simulação corresponde á um cooler,e soará um alarme até que o nível de fumaça diminua. Na programação, há uma  variável que muda seu estado para se comunicar com o sistema de alarme. O acionamento do cooler ocorrerá através da saída de pino do Arduino interfaceado com um transistor TIP120 e um relê.

## Portão e Janela
Portão: O portão, peça reciclada de alumínio, será acionado através de um motor dc. Um algoritmo será implementado no arduino para acionar o mesmo motor, através de uma ponte H. Para controlar o movimento do portão, um fototransistor e uma chave fim-de-curso serão usados.
O muro que acomodará as peças (motor, portão, fototransistor, fim-de-curso) será feita em mdf.
Janela: Uma vez implementado o sistema para o portão, a mesma ideia poderá ser implementada para a janela, dada as devidas proporções.

## Detecção de Intruso
Será usado um sensor via LDR em uma das janelas da casa, quando houver a presença de algo no local, soará um alarme (através de um Buzzer) e todos os LEDS vão piscar.

## Comunicação Bluetooth
O exaustor, o portão e o sistema de iluminação podem ser controlados via Bluetooth.

## Autores:
Wellington Souza Marques: Programação e Desenvolvimento do sistema eletrônico\
Ayron Costa: Desenvolvimento do sistema eletrônico e mecânico\
Edson Ishigaki: Desenvolvimento do sistema eletrônico e mecânico

## Tópicos principais
Comunicação Bluetooth; Acionamento; Domótica

