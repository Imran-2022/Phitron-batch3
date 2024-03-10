from django.db import models

# Create your models here.

class Musician(models.Model):

    
    first_name = models.CharField(max_length=50)  # TextInput
    last_name = models.CharField(max_length=50)  # TextInput
    email = models.EmailField()  # EmailInput
    phone_number = models.CharField(max_length=12)  # TextInput
    instrument_type = models.CharField(max_length=100)  # TextInput

    boolean_field = models.BooleanField()  # CheckboxInput
    date_field = models.DateField()  # DateInput
    date_time_field = models.DateTimeField()  # DateTimeInput
    decimal_field = models.DecimalField(max_digits=10, decimal_places=2)  # NumberInput or TextInput
    duration_field = models.DurationField()  # TextInput

    email_field = models.EmailField()  # EmailInput
    file_field = models.FileField()  # ClearableFileInput
    file_path_field = models.FilePathField()  # Select
    float_field = models.FloatField()  # NumberInput or TextInput
    image_field = models.ImageField()  # ClearableFileInput
    integer_field = models.IntegerField()  # NumberInput or TextInput
    generic_ip_address_field = models.GenericIPAddressField()  # TextInput

    email_field = models.EmailField()  # EmailInput
    file_field = models.FileField()  # ClearableFileInput
    float_field = models.FloatField()  # NumberInput or TextInput
    integer_field = models.IntegerField()  # NumberInput or TextInput
    generic_ip_address_field = models.GenericIPAddressField()  # TextInput
    multiple_choice_field = models.CharField(max_length=100, choices=[('option1', 'Option 1'), ('option2', 'Option 2')])  # Select

    
    typed_multiple_choice_field = models.CharField(max_length=100, choices=[('option1', 'Option 1'), ('option2', 'Option 2')])  # SelectMultiple
    regex_field = models.CharField(max_length=50)  # TextInput
    slug_field = models.SlugField()  # TextInput
    time_field = models.TimeField()  # TimeInput
    url_field = models.URLField()  # URLInput
    uuid_field = models.UUIDField()  # TextInput

    

    def __str__(self):
        return f"{self.first_name} {self.last_name}"