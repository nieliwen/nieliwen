import sys

Zero = ["  ***   ",
        "*     * ",
        "*     * ",
        "*     * ",
        "*     * ",
        "*     * ",
        "  ***   "]
One =  ["    *   ",
        "   **    ",
        "    *    ",
        "    *    ",
        "    *    ",
        "    *    ",
        "   ***   "]
Two =  ["   ****   ",
        " *    *   ",
        " *    *    ",
        "     *     ",
        "    *      ",
        "   *       ",
        "  *******  "]
Three =["     ***** ",
        "        * ",
        "       * ",
        "   ***** ",
        "       * ",
        "       * ",
        "   ***** "]
Four = ["   *    *  ",
        "   *    *  ",
        "   *    *  ",
        "   ******  ",
        "        *  ",
        "        *  ",
        "        *  "]
Five=["*****",
      "*    ",
      "*    ",
      "*****",
      "    *",
      "    *",
      "*****"]
six= ["*****",
      "*",
      "*",
      "*****",
      "*   *",
      "*   *",
      "*****"]
seven=["*****",
       "        *",
       "        *",
       "    *",
       "    *",
       "    *",
       "    *"]
eight=["*****",
       "*   *",
       "*   *",
       "*****",
       "*   *",
       "*   *",
       "*****"]
nine=["*****",
      "*   *",
      "*   *",
      "*****",
      "    *",
      "    *",
      "*****"]




Digits = [Zero, One, Two, Three, Four,Five,six,seven,eight,nine]
try:
    digits = "23"

    row = 0

    while row < 7:
        line = ""

        column = 0

        while column < len(digits):
            number = int(digits[column])

            digit = Digits[number]
            ch=digit[row].replace("*",str(number))
            
            line += ch + "       "

            column += 1
        print(line)
        row += 1
except IndexError:
    print("usage:bigdigits.py<number>")
except ValueError as err:
    print(err, "in", digits)
