# Spring 2025 System Programming — Assignment 3

* **Do not start this project until you have read these instructions carefully and you understand them. If something is not clear, ask.**

---

## ❖・Before You Begin・❖

1. Log in to GitHub.
2. Fork this repository. See [this video](http://code-warrior.github.io/tutorials/git/github/forking-and-cloning-at-the-github-web-site/) on how to carry out this step and step `3`.
3. Clone your fork, using either the web site or the GitHub Desktop client.
4. Checkout your personalized branch, the one with your name.

---

## ❖・Instructions・❖

For this assignment, you’ll be writing two programs. The first requires you to rewrite the Linux program `cat` from Chapter 7, but using the system calls `read`, `write`, `open`, and `close` instead of their standard library equivalents. Perform experiments by comparing the relative speeds of the two versions. Is one faster than the other? If so, which one?

---

For the second program, write a program to compare two files, printing the first line where they differ. In essence, you’re writing a stripped down version of `diff`.

---

## ❖・Grading・❖

| Item                                                                   | Points |
|------------------------------------------------------------------------|:------:|
| `01--cat-using-read-write-open-and-close.c` works                      |  `25`  |
| `02--compare-two-files-and-print-first-line-where-they-differ.c` works |  `25`  |
| Code is neat, professional, and formatted correctly                    |  `50`  |

---

## ❖・Due・❖

Thursday, 1 May 2025, at 3:00 PM. **`NO` late assignments will be accepted, unless you can provide documentation of an emergency.**

---

## ❖・Submission・❖

You will need to issue a pull request back into the original repo, the one from which your fork was created for this project. See the **Issuing Pull Requests** section of [this site](http://code-warrior.github.io/tutorials/git/github/index.html) for help on how to submit your assignment.

**Note**: This assignment may *only* be submitted via GitHub. **`NO` other form of submission will be accepted**.
