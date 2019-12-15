var S = stdin.readLine()
for c in S:
  case c
  of 'O', 'D':
    stdout.write '0'
  of 'I':
    stdout.write '1'
  of 'Z':
    stdout.write '2'
  of 'S':
    stdout.write '5'
  of 'B':
    stdout.write '8'
  else:
    stdout.write c
stdout.write "\n"
