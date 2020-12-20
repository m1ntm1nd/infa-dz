 
window.onload = function () {
var slides = document.querySelectorAll('#slides .slide');

        
  
  var currentSlide = 0;
  var slideInterval = setInterval(nextSlide,2000);

  function nextSlide() {
    slides[currentSlide].className = 'slide';
    currentSlide = currentSlide + 1;
    if (slides.length == currentSlide) {
      currentSlide = 0;
    }
    slides[currentSlide].className = 'slide showing';
  }  
}
