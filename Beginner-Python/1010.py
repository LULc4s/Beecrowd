total = 0

for _ in range(2):
    pcode = int(input())
    punits = float(input())
    pprice = float(input())
    valuetpay = (punits * pprice)
    total += valuetpay

print(f"VALOR A PAGAR: R$ {total:.2}\n")