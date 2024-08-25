Summarize the project and what problem it was solving.
  This project simulated visualizing the sales of products from a grocery store, and logging that data.
What did you do particularly well?
  I'm very happy with the projects structure overall. I remember reading that a class should have one and only one responsibility, and I feel like I've written my classes to do exactly this.
  They're clear and focused, build on their own methods, and don't overlap in their responibilities.
Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?
  I could've used better validation, and buffer limits when taking user inputs. I also could've used try/catch blocks in areas where the code could fail, such as in file reading and writing.
Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?
  Reading the initial input file was tricky, I kept getting random garbage data until I tried stripping all newline characters out. In the future, I would assign integer ID's to everything and use 
  databases rather than a text file, as I was frustrated working with strings and writing something that looked like it should work but failed in practice.
What skills from this project will be particularly transferable to other projects or course work?
  I got some practice with maps, I'm sure I'll find many uses for them in the future. I will also be more cautious with strings in the future, as being cautious with the data intake and ensuring
  I'm reading and sorting the data I expect fixed the issue of the corrpuption in my map due to the new line characters.
How did you make this program maintainable, readable, and adaptable?
  I wrote methods that clearly define what they do, left comments only where the code does not describe what it does, and tried to make my main function describe what the program is doing
  through class and function names.
