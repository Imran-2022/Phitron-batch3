# Generated by Django 5.0.3 on 2024-03-08 10:58

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('first_app', '0002_student_father_name'),
    ]

    operations = [
        migrations.AlterField(
            model_name='student',
            name='father_name',
            field=models.TextField(null=True),
        ),
    ]
