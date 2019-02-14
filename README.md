<h3 align="center">
  <br>
	<img width="400" src="./header.png" alt="code weekly">
</h3>

# code-weekly

code-weekly is a resource for casual programming exercises. An exercise will
<sub>(try to be)</sub> introduced every week, with a sample solution for that
exercise published after a week has expired.

Each week for which an exercise has been posted has a directory; `01/` refers
to the directory of the exercise for week 1. These exercise directories contain
an **exercise description** in their enclosed READMEs and a **test suite** that
can be run with the enclosed `test.py`. More instructions are available in each
weeks' subdirectory.

A sample solution for each exercise will be published in `solutions/` a week
after the exercise is distributed. The language a solution is written in may
vary drastically, as different languages have varying usefulness for different
problems.

The highest-numbered week is the most current weekly exercise available. Right
now, that is [Week 03](./03).

- [Week 01](./01) - write a function that computes n<sup>n</sup> in O(log(n))
  time. _02/06/2019_

- [Week 02](./02) - sum arbitrarily-long integers. _02/13/2019_

- [Week 03](./03) - approximate factorials in O(log(n)) time. _02/20/2019_

### Usage

1. Fork this repo
2. Clone your copy of the forked repo
3. Solve the exercise of the week you want
   - details in the week directory
4. Test your solution
   - details in the week directory
5. Wait one week
   - maybe [request a problem](https://github.com/ayazhafiz/code-weekly/issues/new?assignees=&labels=request&template=request-for-an-exercise.md&title=%5BREQ%5D)
     or [submit your solution](https://github.com/ayazhafiz/code-weekly/issues/new?assignees=&labels=enhancement&template=sample-solution.md&title=%5BSOLN%5D)
6. Pull in the new weekly exercise and repeat from (1)
7. profit?

##### Dependencies and Stuff

You will need [Python](https://www.python.org/downloads/). Your machine probably
already has it; if it doesn't, installation is easy.

You will also need a working knowledge of git, at least to pull in new changes.
There are some [simple guides](http://rogerdudler.github.io/git-guide/) online.

Lastly, to test your exercise, you will have to use command line arguments.
Overviews of how to use CLI args for any language are available online.

### Requests, Bugs, and Solutions

If you have a request for a problem, spot an issue with the repo, or want to
merge your solution to the master branch, [submit an issue](https://github.com/ayazhafiz/code-weekly/issues/new/choose).
Please observe the prescribed issue template.
