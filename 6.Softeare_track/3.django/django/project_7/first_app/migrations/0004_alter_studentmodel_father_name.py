# Generated by Django 5.0.3 on 2024-03-08 18:28

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('first_app', '0003_remove_studentmodel_mother_name_and_more'),
    ]

    operations = [
        migrations.AlterField(
            model_name='studentmodel',
            name='father_name',
            field=models.TextField(max_length=20),
        ),
    ]