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
    <a href="#instrucoes">Instruções</a> | 
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
| 03     | 10/11/2024 | :construction: Em Andamento | [Clique aqui](https://github.com/equipe-javali/API_4/tree/sprint3) |
| 04     | 01/12/2024 | Não iniciada | [Clique aqui](https://github.com/equipe-javali/API_4/tree/sprint4) |

→ [Voltar ao topo](#topo)

<span id='backlog'>

## :clipboard: Requisitos Funcionais
📌 RF-1 Desenvolvimento de um datalogger para uma estação meteorológica: Como cliente, quero criar um sistema para registrar dados do clima, para que eu possa armazenar e consultar as informações meteorológicas registradas pelas estações.

📌 RF-2 Montagem de uma estação meteorológica: Como cliente, quero montar uma estação meteorológica para que ela possa medir dados como temperatura, umidade e outras informações climáticas importantes.

📌 RF-3 Cadastro das estações, parâmetros, alertas e usuários: Como administrador, quero cadastrar estações e suas informações, para que eu possa gerenciar cada estação, o que ela mede, e definir alertas e usuários responsáveis.

📌 RF-4 Recepção dos dados das estações meteorológicas: Como cliente, quero que o sistema receba automaticamente os dados das estações, para que eu tenha acesso aos dados mais recentes e possa acompanhar o clima em tempo real.

📌 RF-5 Dashboards para visualização dos parâmetros meteorológicos: Como cliente, quero visualizar os dados meteorológicos em painéis, para que eu possa ver de maneira organizada as informações de cada estação e monitorar os parâmetros meteorológicos.

📌 RF-6 Geração de alertas: Como cliente, quero que o sistema gere alertas automáticos para que eu seja avisado de mudanças climáticas importantes, como temperaturas extremas ou previsões de chuva intensa.

📌 RF-7 Tutorial para os alunos do significado de cada parâmetro meteorológico: Como cliente, quero que seja possível que alunos, que não terão login ao sistema, possam ter acesso aos dados das estações e a um tutorial sobre esse dados para que possam entender o que cada parâmetro significa e interpretar melhor as informações do clima.

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
<!-- - [Figma](https://www.figma.com): Prototipagem
- [Git](https://git-scm.com): Versionamento
- [GitHub](https://github.com/): Armazenamento de código e documentação
- [TypeScript](https://www.w3schools.com/js/default.asp): Linguagem de programação do frontend
- [Java](https://java.com): Linguagem de programação do backend
- [Jira](https://www.atlassian.com/software/jira): Organização de tarefas
- [PostgreSQL](https://www.postgresql.org/): Banco de dados
- [Supabase](https://supabase.com/): Banco de dados PostgreSQL on-line
- [React](https://pt-br.reactjs.org/): Framework do frontend
- [Spring](https://spring.io/): Framework do backend -->

→ [Voltar ao topo](#topo)  
<span id="instrucoes">

## :gear: Instruções para Executar o Projeto

### Banco de Dados

<!-- 1. Instalar o PostgreSQL: [Download PostgreSQL](https://www.postgresql.org/download/)
   (Selecionar as Command line tools nas opções de instalação)
2. Criar um banco de dados vazio: `create database ctrlA_BD;`
3. Copiar o arquivo ctrlA_BD.sql na raiz do repositório do Banco de Dados: [Repositório do Banco de Dados](https://github.com/equipe-javali/API_3_BD)
4. Executar esse arquivo para criar as tabelas e alimentar o banco de dados com o comando: `psql -h localhost -p 5432 -d ctrlA_BD -U postgres -f ctrlA_BD.sql`
5. Inserir a sua senha do Postgres -->

### Backend 

<!-- 1. Instalar Java: [Download Java](https://www.java.com/download/ie_manual.jsp)
2. Clonar o repositório do backend: `git clone https://github.com/equipe-javali/API_3_BACK`
3. Editar o arquivo application.properties na pasta `API_3_BACK\CtrlA\src\main\resources` com sua senha do Postgres (alterar a porta e o usuário, se necessário)
4. Executar o backend usando um IDE como Eclipse ou Intellij (Maven). -->

### Frontend

<!-- 1. Clonar o repositório do frontend: `git clone https://github.com/equipe-javali/API_3_FRONT`
2. Acessar a pasta `API_3_FRONT\ctrl-a` e executar os comandos: `npm install` e `npm start` -->

### Login

<!-- Para fazer login no sistema, use os seguintes dados:
- email: joane@email.com
- senha: melancia -->


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
