from django.shortcuts import render
from . forms import contactForm,StudentData,PasswordValidationProject
# Create your views here.

def index(request):
    data=[{
    "userId": 1,
    "id": 1,
    "title": "sunt aut facere repellat provident occaecati excepturi optio reprehenderit",
    "body": "quia et suscipit\nsuscipit recusandae consequuntur expedita et cum\nreprehenderit molestiae ut ut quas totam\nnostrum rerum est autem sunt rem eveniet architecto"
  }]
    
    return render(request, 'index.html', {"data":data})

def about(request):

    # we can pass form here, like request.GET data 

    print(request.POST)
    if request.method=='POST':
        name=request.POST.get('user-name')
        email=request.POST.get('email')
        select=request.POST.get('select')
        return render(request, 'about.html',{'name':name,'email':email,'select':select})
    else:
      return render(request, 'about.html')

def submit_form(request):
    print(request.POST)
    return render(request, 'form.html')

def DjangoForm(request):
    if request.method=='POST':
        form=contactForm(request.POST,request.FILES)
        if form.is_valid():
            # file=form.cleaned_data['file']
            # with open('./first_app/upload/'+file.name,'wb+') as destination:
            #     for chunk in file.chunks():
            #         destination.write(chunk)
            print(form.cleaned_data)
        # return render(request,'django_form.html',{'form':form})
    else:
        form=contactForm()
    return render(request,'django_form.html',{'form':form})




# def DjangoForm(request):
#     form=contactForm(request.POST)
#     # print(form)
#     if form.is_valid():
#         print(form.cleaned_data)
#     return render(request,'django_form.html',{'form':form})



def StudentForm(request):
    if request.method=='POST':
        form = StudentData(request.POST,request.FILES)
        if form.is_valid():
            print(form.cleaned_data)
    else:
        form=StudentData()
    return render(request,'django_form.html',{'form':form})



def PasswordValidation(request):
    if request.method=='POST':
        form = PasswordValidationProject(request.POST,request.FILES)
        if form.is_valid():
            print(form.cleaned_data)
    else:
        form=PasswordValidationProject()
    return render(request,'django_form.html',{'form':form})


