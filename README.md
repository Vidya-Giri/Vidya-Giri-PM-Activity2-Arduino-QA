# Arduino LED QA Project

## Project Description

This project demonstrates QA documentation and problem solving for a basic Arduino LED blinking system using GitHub.

The original Arduino program uses delay() for LED timing. The code was analyzed to identify quality, timing and scalability issues.

## Objectives

- Create a GitHub repository for an Arduino project.
- Identify QA issues in Arduino code.
- Perform root cause analysis.
- Suggest solutions for identified problems.
- Track QA issues using GitHub Issues.
- Use branches and Pull Requests.
- Track project activities using GitHub Projects.
- Document verification of the improved solution.

## Original Code

The original program turns the built-in LED ON and OFF using delay().

## QA Issues

1. Blocking delay() calls
2. Timing depends on delay() execution
3. No configurable blink interval
4. Limited scalability of blocking design

## Improved Solution

The blocking delay()-based timing is replaced with millis()-based non-blocking timing.

## Learning Outcome

This activity helped me understand GitHub repositories, Issues, branches, Pull Requests, project tracking, root cause analysis and software quality improvement.
## QA Refactoring
The LED blinking logic was reviewed and improved using non-blocking timing.
