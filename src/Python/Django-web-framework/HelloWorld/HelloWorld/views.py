from django.shortcuts import render
def myname(request):
	return render(request, "index.html")
