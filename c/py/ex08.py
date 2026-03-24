def linha_montagem():
    for i in range(5):
        print("Processando peça...")
        yield i

gen = linha_montagem()

for _ in range(5):
    print(next(gen))
