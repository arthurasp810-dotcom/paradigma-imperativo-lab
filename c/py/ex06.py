def buscar(estrutura, alvo):
    
    if alvo in estrutura:
        return True

  for chave in estrutura:
        if isinstance(estrutura[chave], dict):
            if buscar(estrutura[chave], alvo):
                return True
    return False

dados = {
    "pasta1": {
        "pasta2": {
            "arquivo.txt": "conteudo"
        }
    }
}

print(buscar(dados, "arquivo.txt"))
