import random
import sys

# Définitions des limites des entiers signés en C
INT_MIN = -2147483648
INT_MAX = 2147483647

# Vérification du nombre d'arguments
if len(sys.argv) != 2:
    print("Usage: python3 rand_number.py <nombre_de_nombres>")
    sys.exit(1)

# Nombre de nombres à générer
count = int(sys.argv[1])

# Vérification que l'argument est un entier positif
if count <= 0:
    print("Erreur : Le nombre de nombres doit être un entier positif.")
    sys.exit(1)

# Set pour garantir l'unicité des nombres
numbers = set()

# Génération des nombres aléatoires sans doublons
while len(numbers) < count:
    # Générer un nombre aléatoire entre INT_MIN et INT_MAX
    random_seed = random.randint(INT_MIN, INT_MAX)
    numbers.add(random_seed)  # L'ajouter à l'ensemble (le set ignore les doublons)

# Affichage des nombres sur une seule ligne
print(" ".join(map(str, numbers)))


# leaks: valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file=valgrind-out.txt ./push_swap $(python3 rand_number.py 500)
#ARG=$(python3 rand_number.py 4); ./push_swap $ARG | ./checker_linux $ARG
#ARG=$(python3 ./autre/rand_number.py 4); ./push_swap $ARG | ./autre/checker_linux $ARG
#ARG=$(python3 rand_number.py 4); ./push_swap $ARG | wc -l
#./push_swap $(python3 rand_number.py 3) 