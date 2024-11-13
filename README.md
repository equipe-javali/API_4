<span id="topo">
<h1 align='center'>
:boar: EQUIPE JAVALI :boar:

APRENDIZAGEM POR PROJETOS INTEGRADOS

4º SEMESTRE DSM - 2024-2
</h1>

<h1 align='center'> :keyboard:  :keyboard: </h1>

## :mag_right: Índice
<p align='center'>
    <a href="#objetivo">Objetivo</a> | 
    <a href="#relatorios">Relatórios</a> |
    <a href="#backlog">Backlog total</a> |
    <a href="#sprints">Sprints</a> |
    <a href="#tecnologias">Tecnologias</a> |
    <a href="#equipe">Equipe</a> 
</p>

<span id='objetivo'>

## :dart: Objetivo
<p align='justify'>
    O objetivo do projeto é desenvolver um sistema onde os dados coletados pelos sensores de direção e velocidade do vento, índice pluviométrico, umidade, temperatura e pressão devem ser recepcionados, tratados e exibidos em um portal capaz de disponibilizar relatórios, dashboards e demonstrar os conceitos matemáticos envolvidos nos cálculos dos parâmetros, bem como relacionar a importância do monitoramento ambiental como ferramenta para evitar desastres naturais através da geração de alertas.
</p>

<span id='relatorios'>

## :pushpin: Relatórios pro sprint
Na tabela abaixo é possível visualizar os resultados de cada Sprint clicando em "Ver entrega". 
| Sprint |  Entrega   |            Status           | Relatório |
|:------:|:----------:|:---------------------------:|:---------:|
| 01     | 29/09/2024 | ✔️ Finalizada | [Clique aqui](https://github.com/equipe-javali/API_4/tree/sprint1) |
| 02     | 20/10/2024 | ✔️ Finalizada | [Clique aqui](https://github.com/equipe-javali/API_4/tree/sprint2) |
| 03     | 10/11/2024 | ✔️ Finalizada | [Clique aqui](https://github.com/equipe-javali/API_4/tree/sprint3) |
| 04     | 01/12/2024 | :construction: Em Andamento | [Clique aqui](https://github.com/equipe-javali/API_4/tree/sprint4) |

→ [Voltar ao topo](#topo)

<span id='backlog'>

## :clipboard: Requisitos Funcionais
📌 RF-1 Datalogger da estação meteorológica: A funcionalidade garante que o datalogger que possa registrar informações dos sensores instalados em uma estação meteorológica. Esse dispositivo deve ser capaz de coletar e armazenar corretamente os dados de temperatura, chuva e vento que os sensores captam. A ideia é garantir que os dados, conforme FR-3, fiquem salvos para serem acessados mais tarde e que tudo funcione sem problemas na captação e leitura desses dados.

📌 RF-2 Integração com a estação: A funcionalidade de integração com a estação meteorológica permite que as estações enviem automaticamente para o sistema informações captadas pelos sensores, como temperatura, vento e chuva. Essa integração facilita o acesso e a análise desses dados de maneira prática e centralizada, atendendo às necessidades de monitoramento do clima em tempo real para gerar alertas.

📌 RF-3 Cadastro das estações, parâmetros, alertas e usuários: A funcionalidade de cadastro permite ao administrador registrar as estações meteorológicas e suas especificações, como os parâmetros medidos. Além disso, ele pode configurar alertas para determinadas condições e gerenciar quais usuários são responsáveis pelo acompanhamento de cada estação. Isso ajuda a organizar e controlar todos os aspectos do gerenciamento das estações dentro do sistema. Os dados a serem registrados incluem para a estação: id, nome, endereco, latitude, longitude, mac address. Para o alerta: id, id da estacao, id do parametro, condição, nome, valor. Para a ocorrência: id, id do alerta, data/hora, valor. Para o parâmetro: id, id da unidade, nome, fator, valor de offset, nome do json. Para a tabela Unidade de medida: id e nome. Para o SensorEstação: id, id da estacao, id do sensor. Para o Sensor: id, id do parametro, nome. Para a medição: id, id do sensor, data e hora, valor calculado. Para o usuário: id, nome, email e senha.

📌 RF-4 Recepção dos dados das estações meteorológicas: A funcionalidade de recepção automática de dados garante que o sistema receba continuamente as informações das estações meteorológicas no banco de dados sendo devidamente armazenados e tratados conforme dados listados na RF-3. Isso possibilita o acesso a dados atualizados em tempo real, permitindo que o cliente acompanhe as condições climáticas através dos alertas gerados pelo sistema.

📌 RF-5 Dashboards para visualização dos parâmetros meteorológicos: Os painéis devem exibir de forma clara e prática os dados. Neles, o cliente pode ver informações como alertas por estação, temperatura média por região, nível de chuva médio por período e nível de chuva médio por região.

📌 RF-6 Geração de alertas: A geração de alertas automáticos no sistema permite que o cliente seja notificado sobre condições climáticas importantes, como temperaturas extremas, chuvas intensas e ventos fortes. Esse recurso possibilita ao cliente se preparar com antecedência para essas situações, promovendo segurança e eficiência no uso dos dados registrados e analisados pelo sistema.

📌 RF-7 Tutorial para os alunos do significado de cada parâmetro meteorológico: A funcionalidade tem como finalidade cumprir um papel social por parte da empresa, para que alunos possam aprender e entender o significado de cada parâmetro medido pelas estações bem como os cálculos utilizados no sistema para parametrizar os alertas. Esse tutorial ajuda os estudantes a interpretar corretamente os dados, contribuindo para seu aprendizado sobre o clima e fenômenos atmosféricos.

→ [Voltar ao topo](#topo)

## :clipboard: Requisitos NÃO Funcionais
:pushpin: Prezar pelo UX dos dashboards     
:pushpin: Aplicar a aprendizagem baseada em problemas  
:pushpin: Documentações de rotas das APIs   
:pushpin: Pipeline de IC    
:pushpin: Deploy automático     

##  Épicos

![Epics](https://github.com/user-attachments/assets/782d2656-6c56-4e8f-ba07-746c86d5b3f1)


## Backlog total

![Backlog (1)](https://github.com/user-attachments/assets/d7674e42-b66d-4d9f-a300-f99b4cc3d77d)
![Backlog (2)](https://github.com/user-attachments/assets/2a496729-353a-47b0-bb0d-6b657bc273c7)

→ [Voltar ao topo](#topo)



<span id='tecnologias'>

## 💻 Tecnologias
Foram usadas as seguintes ferramentas, linguagens e tecnologias para a execução do projeto:
- [Figma](https://www.figma.com): Prototipagem
- [Git](https://git-scm.com): Versionamento
- [GitHub](https://github.com/): Armazenamento de código e documentação
- [TypeScript](https://www.w3schools.com/js/default.asp): Linguagem de programação do front e back-end
- [Taiga](https://tree.taiga.io): Organização de tarefas
- [PostgreSQL](https://www.postgresql.org/): Banco de dados
- [Neon Tech](https://neon.tech): Banco de dados PostgreSQL on-line
- [React](https://pt-br.reactjs.org/): Framework do front-end
- [Express](https://expressjs.com): Framework do back-end
- [Swagger](https://swagger.io): Documentação das rotas no back-end

→ [Voltar ao topo](#topo)
<span id="equipe">

## :busts_in_silhouette: Equipe
|     Função    |         Nome        |                                                                                                    LinkedIn                                                                                                                             |                                                                                    GitHub                                                                                    |
| :-----------: | :-----------------: | :-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------: | :--------------------------------------------------------------------------------------------------------------------------------------------------------------------------: |
| Product Owner | Mariana Izumi       | <a href="https://www.linkedin.com/in/mariana-izumi-developer" target="_blank"> <img src="https://img.shields.io/badge/-LinkedIn-%230077B5?style=for-the-badge&logo=linkedin&logoColor=white" target="_blank">                           | <a href="https://github.com/MariMiks/" target="_blank"><img src="https://img.shields.io/badge/GitHub-100000?style=for-the-badge&logo=github&logoColor=white"></a>            |
| Scrum Master  | Rafael Nunes        | <a href="https://www.linkedin.com/in/rafael-nunes-silva" target="_blank"> <img src="https://img.shields.io/badge/-LinkedIn-%230077B5?style=for-the-badge&logo=linkedin&logoColor=white" target="_blank">                                | <a href="https://github.com/Rafael-Nunes-Silva" target="_blank"><img src="https://img.shields.io/badge/GitHub-100000?style=for-the-badge&logo=github&logoColor=white"></a>   |
| Dev Team      | Bruno Serpa         | <a href="https://www.linkedin.com/in/brunoserpa" target="_blank"> <img src="https://img.shields.io/badge/-LinkedIn-%230077B5?style=for-the-badge&logo=linkedin&logoColor=white" target="_blank">                                        | <a href="https://github.com/BrunoSerpa" target="_blank"><img src="https://img.shields.io/badge/GitHub-100000?style=for-the-badge&logo=github&logoColor=white"></a>           |
| Dev Team      | Katiane Soares      | <a href="https://www.linkedin.com/in/katiane-soares-4b8193245/" target="_blank"> <img src="https://img.shields.io/badge/-LinkedIn-%230077B5?style=for-the-badge&logo=linkedin&logoColor=white" target="_blank">                         | <a href="https://github.com/Katianefatec" target="_blank"><img src="https://img.shields.io/badge/GitHub-100000?style=for-the-badge&logo=github&logoColor=white"></a>         |
| Dev Team      | Maria Gabriela      | <a href="https://www.linkedin.com/in/gabrieia-mello-3819a9270/" target="_blank"> <img src="https://img.shields.io/badge/-LinkedIn-%230077B5?style=for-the-badge&logo=linkedin&logoColor=white" target="_blank">                         | <a href="https://github.com/MariaGabrielaMello" target="_blank"><img src="https://img.shields.io/badge/GitHub-100000?style=for-the-badge&logo=github&logoColor=white"></a>   |
| Dev Team      | Marcus Betti        | <a href="https://www.linkedin.com/in/marcus-betti-715b6614a/" target="_blank"> <img src="https://img.shields.io/badge/-LinkedIn-%230077B5?style=for-the-badge&logo=linkedin&logoColor=white" target="_blank">                           | <a href="https://github.com/marcusvbe"><img src="https://img.shields.io/badge/GitHub-100000?style=for-the-badge&logo=github&logoColor=white"></a>                            |
| Dev Team      | Silmara Bittencourt | <a href="https://www.linkedin.com/in/silmara-in%C3%AAs-bittencourt-da-costa-243478214/" target="_blank"> <img src="https://img.shields.io/badge/-LinkedIn-%230077B5?style=for-the-badge&logo=linkedin&logoColor=white" target="_blank"> | <a href="https://github.com/SBittencourt"><img src="https://img.shields.io/badge/GitHub-100000?style=for-the-badge&logo=github&logoColor=white"></a>                         |

→ [Voltar ao topo](#topo)
