'''
   ad-hoc
   difficulty: easy
   date: 10/Mar/2020 
   by: @brpapa
'''

T = int(input())

for t in range(1, T+1):
   n = int(input())

   a = i = 0
   n_aux = n
   while (n_aux > 0):
      if (n_aux % 10) == 4:
         a += 1 * (10 ** i)

      n_aux //= 10
      i += 1

   print('Case #%d: %d %d'%(t, a, n-a))