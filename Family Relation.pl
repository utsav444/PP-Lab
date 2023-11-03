parent(jay, nitu).
parent(jay, amit).
parent(khushi, nitu).
parent(khushi, amit).
parent(nitu, sneha).
parent(amit, ramesh).
abc(khushi, jay).
def(jay, khushi).
sibling(amit, nitu).

father(X, Y) :- parent(X, Y).
mother(X, Y) :- parent(X, Y).
child(X, Y) :- parent(Y, X).
sibling(X, Y) :- parent(Z, Y), parent(Z, X), X \= Y.
brother(X, Y) :- sibling(Y, X).
sister(X, Y) :- sibling(X, Y).
husband(X, Y):- abc(Y, X).
wife(X, Y) :- def(Y, X).


grandparent(X, Z) :- parent(X, Y), parent(Y, Z).
grandmother(X, Z) :- grandparent(X, Z).
grandfather(X, Z) :- grandparent(X, Z).