# PROCESSO.md — Lab 1 · Pisca-LED

**Aluno:** Maria Fernanda Ramos Mendes Francisco · maria.francisco@sou.inteli.edu.br
**Turma / grupo:** T26 · Grupo2

## 1. Contextualizar
- **Objetivo:** O objetivo dessa atividade é fazer com que o LED status indique que o dispositivo está funcionando  e ligado
- **Comportamento esperado:** o comportamento esperado é o pulso de 200 ms aceso a cada 2segundos
- **Critério de aceitação:** o ciclo cronometrado deve ficar dentre 1,9s e 2,1s e a corrente calculada fica abaixo de 20mA(recomendado pelo Datasheet)
- **Delegação à IA × feito sozinho:** Me ajude a construir o código, sem respostas prontas utilizando o método socrático, vamos construir o código juntos e eu irei digitar sozinha.
## 2. Consultar
- **Ferramenta:** Claude
- **Pergunta (exata):** Como ter certeza que o Led não irá queimar? e o que fazer se ele queimar?
- **Resposta resumida:** **Para não queimar:** use sempre um resistor em série (220 Ω, que dá cerca de 13,6 mA, abaixo dos 20 mA), confira a polaridade (perna longa no pino e curta no GND) e, se quiser ter certeza, meça a corrente com o multímetro.

**Se queimar:** desligue tudo, teste o LED com o multímetro, descubra a causa (resistor errado, curto ou ligação direta), teste o pino do Arduino e só então troque o LED.

## 3. Confrontar
- **Afirmação conferida:** Sempre use um resistor em série. Ligar o LED direto no pino, sem resistor, é a causa nº 1 de LED queimado. O resistor é o que limita a corrente.
- **Fonte primária:** Outra
- **Trecho / cálculo:** Sem o resistor em série, o LED tenta puxar toda a corrente que a fonte (ou o pino do microcontrolador) consegue fornecer. Como o LED não tem uma resistência interna significativa, essa corrente excessiva queima o componente em segundos e, em alguns casos, pode até danificar o pino do seu Arduino
- **Veredito:** Confirmada
- **ADR:** —

## 4. Construir
- **Wokwi:** https://wokwi.com/projects/477968944358538241
- **Repositório / commit:** —
- **Ciclo medido:** 1.93 s
- **Corrente calculada com 220 Ω:** — mA
- **Projeto funcionando:** não

## 5. Comprovar (sem IA)
1. **Corrente com 330 Ω:** — mA — cálculo: —
2. **Resistor de 0 Ω:** Porque a corrente fica baixa demais e o LED superaquece. — —
3. **LED no pino 12:** É preciso trocar o pinMode para INPUT.
4. **TEMPO_APAGADO para 500 ms a cada 3 s:** — ms

Declaro que respondi a etapa Comprovar sem IA: não
