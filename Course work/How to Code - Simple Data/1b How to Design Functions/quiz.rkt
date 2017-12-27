;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-beginner-reader.ss" "lang")((modname quiz) (read-case-sensitive #t) (teachpacks ()) (htdp-settings #(#t constructor repeating-decimal #f #t none #f () #f)))
(require 2htdp/image)

;; Image, Image -> Boolean
;; Produces true if the first image is larger than the second image
(check-expect (large
               (circle 20 "solid" "green")
               (circle 10 "solid" "blue")) true)
(check-expect (large
               (circle 20 "solid" "green")
               (circle 20 "solid" "blue")) false)
(check-expect (large
               (circle 20.7 "solid" "green")
               (square 40 "solid" "blue")) true)
;(define (large img1 img2) true) ;stub

;(define (large img1 img2) ;template
;  (... img1 img2))

(define (large img1 img2)
  (and (>
      (image-width img1)
      (image-width img2))
     (>
      (image-height img1)
      (image-height img2))))