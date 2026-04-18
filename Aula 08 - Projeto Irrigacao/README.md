# Projeto Integrado - Monitoramento e Automação de Estufa

Neste projeto, desenvolvi um sistema completo de Agricultura de Precisão utilizando um Arduino Uno para monitorar variáveis ambientais e automatizar o cuidado com plantas de forma autônoma.

### 🛠️ Hardware
* **Arduino Uno R3:** Unidade central de processamento.
* **Sensores:** TMP36 (Temperatura), LDR (Luminosidade) e Sensor Capacitivo (Umidade do Solo).
* **Atuadores:** Micro Servo (Ventilação), Motor CC (Irrigação), Relé (Aquecimento) e Buzzer (Alarme).
* **Componentes de Apoio:** Transistor NMOS (Controle da Bomba), Diodo de Proteção e Resistores.

### 🧠 Lógica de Funcionamento

O firmware consolidado executa as seguintes ações baseadas nos requisitos do projeto fornecidos pelo professor:

* **Aquecimento:** Se a temperatura for inferior a 10°C, o relé é acionado para ligar a lâmpada de aquecimento.
* **Ventilação:** Se a luminosidade for alta e a temperatura ultrapassar 28°C, o servo motor gira 90° para abrir a janela.
* **Irrigação:** Se a umidade do solo cair abaixo de 70%, a bomba (Motor CC) é ligada em velocidade média (PWM 127) para evitar o ressecamento.
* **Segurança:** Caso a temperatura ultrapasse 45°C, um alarme sonoro (Buzzer) é ativado continuamente.

### 🎞️ Demonstração
![Funcionamento da Estufa](./projeto_estufa.gif)

---
*Projeto desenvolvido no Tinkercad para fins didáticos.*
