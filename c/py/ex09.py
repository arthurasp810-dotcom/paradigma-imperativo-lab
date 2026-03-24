def gerar_logs():
    i = 0
    while True:
        yield f"log {i}"
        i += 1

gen = gerar_logs()

for _ in range(5):
    print(next(gen))
