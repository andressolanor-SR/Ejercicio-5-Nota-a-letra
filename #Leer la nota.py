#Leer la nota
nota = int(input("Ingresa la nota (0-20): "))

# Convertir a letra
if nota >= 18 and nota <= 20:
    print("A")
elif nota >= 14 and nota <= 17:
    print("B")
elif nota >= 12 and nota <= 13:
    print("C")
else:
    print("D")

