# Practice 7 · Menu replay

**Week 07 · Loops**  
**Theme:** Do it again on purpose


## Demo video (required)

Paste a link to a short video of you running this assignment (tool + code + run).
Work without a working video link is incomplete.

**Your demo:** _add your link here_


## What to build
A small menu that comes back until the user quits. Two real actions. Quit is a first-class choice.

## Requirements
- Loop until quit
- At least two working actions (print something useful — a greeting, a tiny calc, a countdown)
- Validate the menu choice (bad numbers get a message, not a crash)
- At least one `for` and one while-family loop in the program
- README with a **multi-turn** sample session

## Sample session
```
1) Greet  2) Countdown  3) Quit
Choice: 1
Name: Sam
Hello, Sam
1) Greet  2) Countdown  3) Quit
Choice: 9
Not a choice.
1) Greet  2) Countdown  3) Quit
Choice: 3
Bye.
```

## Starter
`main.cpp` — or continue from the lab.

## Deliverables
1. Course-visible GitHub repo
2. README with a multi-turn sample
3. Short demo video (tool + code + run)
4. Canvas links

## Scope fence
Functions not required — comments can mark the sections. No `goto`. No array requirement.

## Integrity
- AI = tutor, not ghostwriter
- Fake ownership → zero
- Due: Monday night (not Sunday)
- Discussions (every week): first post Friday, replies Sunday
- Late: course policy (−10%/day unless stated otherwise)

## Rubric
Graded on: it runs, it meets the prompt, output is labeled, and the GitHub repo plus demo video are there.

## Getting started

1. Fork this repo on GitHub.
2. Clone your fork.
3. Compile and run:

```bash
g++ -std=c++17 -o program main.cpp && ./program
```

On Windows (Visual Studio), open `main.cpp` and use **Local Windows Debugger**.
4. Record a short demo that shows your tool, your code, and a real run.
5. Paste the video link in the **Demo video** section above.
6. Submit your fork URL on Canvas.
