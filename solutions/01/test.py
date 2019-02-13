import subprocess

with open('SOLUTION_COMMAND') as sol_cmd:
    cmd = list(map(lambda s: s.strip(), sol_cmd.read().split(' ')))

with open('tests.txt') as f:
    lines = f.readlines()

cases = list(map(lambda s: s.strip(), lines[0::3]))
expect = list(map(lambda s: s.strip(), lines[1::3]))

for i in range(0, len(cases)):
    res = subprocess.check_output(cmd + [cases[i]]).strip()
    assert res == expect[i], "Test case value `{}` failed. Got\n\t{}\nExpected\n\t{}".format(
        cases[i], res, expect[i])

print("All tests pass!")
