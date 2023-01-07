-module(fibonacci).

-export([fib/1]).

% fib function in Erlang

fib(X) when X <= 1 ->
	1;

fib(X) when x > 1 ->
	fib(X-1) + fib(X-2)
