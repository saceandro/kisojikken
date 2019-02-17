;; 1引数関数fとgを受け取って、合成関数gfを返す関数compose
;; (f x)の返り値にgを適用している。
(define (compose f g)
  (lambda (x) (g (f x))))
