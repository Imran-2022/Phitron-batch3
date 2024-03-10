from django import forms
from django.core import validators
# from django.core.validators import MaxValueValidator, MinValueValidator

class contactForm(forms.Form):

    # name=forms.CharField(label='Full Name : ', initial='Rahim', help_text='enter your full name', required=False, disabled=True,)
    # email=forms.EmailField(label='user email')
    # age=forms.IntegerField()
    # weight=forms.FloatField()
    # balance=forms.DecimalField()
    # check=forms.BooleanField()
    # birthday=forms.DateField()
    # appointment=forms.DateTimeField()
    # CHOICES=[('S','size'),('M','Medium'),('L','Large')]
    # size=forms.ChoiceField(choices=CHOICES)
    # MEAL=[('p','peperoni'),('m','mashroom'),('b','beef')]
    # pizza=forms.MultipleChoiceField(choices=MEAL)

    #  widgets

    name=forms.CharField(label='Full Name : ', initial='Rahim', help_text='enter your full name', required=False, disabled=True,widget=forms.Textarea(attrs={'id':'text_area','class':'abcde fghijk lmn opqrast','placeholder':'enter your name'})  )
    email=forms.EmailField(label='user email')
    # age=forms.IntegerField()
    # weight=forms.FloatField()
    # balance=forms.DecimalField()
    age=forms.CharField(widget=forms.NumberInput)

    check=forms.BooleanField()
    birthday=forms.CharField(widget=forms.DateInput(attrs={'type':'date'}))
    appointment=forms.CharField(widget=forms.DateInput(attrs={'type':'datetime-local'}))
    CHOICES=[('S','size'),('M','Medium'),('L','Large')]
    size=forms.ChoiceField(choices=CHOICES,widget=forms.RadioSelect)
    MEAL=[('p','peperoni'),('m','mashroom'),('b','beef')]
    pizza=forms.MultipleChoiceField(choices=MEAL,widget=forms.CheckboxSelectMultiple)

# file upload---
    # file=forms.FileField()

# class StudentData(forms.Form):

#     name=forms.CharField(widget=forms.TextInput)
#     email=forms.CharField(widget=forms.EmailInput)
    # def clean_name(self):
    #     valName=self.cleaned_data['name']
    #     if len(valName)<10:
    #         raise forms.ValidationError('enter a name with atleast 10 char')
    #     return valName
    # def clean_email(self):
    #     valEmail=self.cleaned_data['email']
    #     if '.com' not in valEmail:
    #         raise forms.ValidationError('your email must contain .com')
    #     return valEmail

    # def clean(self):
    #     cleaned_data=super().clean()
    #     valName=self.cleaned_data['name']
    #     valEmail=self.cleaned_data['email']
    #     if len(valName)<10:
    #         raise forms.ValidationError('enter a name with atleast 10 char')
    #     if '.com' not in valEmail:
    #         raise forms.ValidationError('your email must contain .com')
    # # return drkr nai !! 

def len_check(value):
    if len(value)<10:
        raise forms.ValidationError("enter a vlaue at least 10 characters")
    
class StudentData(forms.Form):

    name=forms.CharField(widget=forms.TextInput,validators=[validators.MinLengthValidator(10,"enter a name with atleast 10 char")])
    email=forms.CharField(widget=forms.EmailInput,validators=[validators.EmailValidator("enter a valid email")])
    age = forms.IntegerField(
        validators=[
            validators.MaxValueValidator(34, message='Age must be maximum 34'),
            validators.MinValueValidator(24, message='Age must be at least 24')
        ]
    )

    file =forms.FileField(validators=[validators.FileExtensionValidator(allowed_extensions=['pdf','png'],message='File extension must be ended with .pdf')])

    # Regex,url validation o use kra jete pare !!!!!! 

    text= forms.CharField(widget=forms.TextInput,validators=[len_check])


class PasswordValidationProject(forms.Form):
    name=forms.CharField(widget=forms.TextInput)
    password=forms.CharField(widget=forms.PasswordInput)
    Confirm_password=forms.CharField(widget=forms.PasswordInput)

    def clean(self):
        cleaned_data=super().clean()
        val_pass=self.cleaned_data['password']
        val_compass=self.cleaned_data['Confirm_password']
        val_name=self.cleaned_data['name']

        if val_pass!=val_compass:
            raise forms.ValidationError("Password doesn't match")
        if len(val_name)<10:
            raise forms.ValidationError('Name must be atleast 15 char')
        