from dataclasses import dataclass

@dataclass
class Aluno:
    nome: str
    registro: list
    qtd_aulas: int = 0
    presencas: int = 0
    frequencia: float = 0.0

casos = int(input())
for i in range(casos):
    nao_presentes = []    

    qtd_alunos = int(input())
    if qtd_alunos == 0:
        print()
        continue

    nome_alunos = input().split(' ')
    registros = input().split(' ')

    for i in range(qtd_alunos):
        aluno = Aluno(nome_alunos[i], registros[i])
        
        aluno.qtd_aulas = len(aluno.registro) - aluno.registro.count('M')
        aluno.presencas = aluno.registro.count('P')

        if aluno.qtd_aulas > 0:
            aluno.frequencia = (100 * aluno.presencas) / aluno.qtd_aulas
        if aluno.frequencia < 75:
            nao_presentes.append(aluno.nome)

    if nao_presentes:
        print(' '.join(nao_presentes))
    else:
        print()