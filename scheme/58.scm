;; 末尾再帰でフィボナッチ数を計算する関数fib2-iter
;; 初項a0、a1が、counterの数だけa1、(a1+a0)に置き換えられていき、最終的に置き換えられたa0の値を返す。
(define (fib2-iter a1 a0 counter)
  (if (< counter 1)
      a0
      (fib2-iter (+ a1 a0) a1 (- counter 1))))

;; (fib2 n)は、(fib2-iter 1 0 n)の評価結果(初項0,1のフィボナッチ数列の第n項)
(define (fib2 n)
  (fib2-iter 1 0 n))
