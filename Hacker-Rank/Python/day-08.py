def phone_book():
    n = int(input())
    p_book = {}
    keys = []

    for i in range(n):
        name,phone = input().split()
        p_book[name] = phone


    for i in range(n):
        name = input()
        keys.append(name)


    for key in keys:
        if key in p_book:
            print(f"{key}={p_book[key]}")
        else:
            print("Not found")

phone_book()
