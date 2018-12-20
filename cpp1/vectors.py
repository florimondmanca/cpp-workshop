tab = [1, 2, 3, 4, 5]

print(*tab, sep='\n')

vec = []
for i in range(5):
    vec.append(int(input('Please enter integer #{}: '.format(i))))

print('Eléments de vec')
print(*vec, sep='\n')

print('Somme de chaque élément et le suivant')
for first, second in zip(vec, vec[1:]):
    print(first + second)
# Ou:
print(*map(sum, zip(vec, vec[1:])), sep='\n')

print('Somme de chaque élément avec le suivant')
for first, second in zip(vec, vec[::-1]):
    print(first + second)
